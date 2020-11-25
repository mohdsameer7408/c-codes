#include <stdio.h>
#include <conio.h>

// swap function to swap two numbers
void swap(float *a, float *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}

// creating min heap
void heapify(float profit[], float weight[], float profitToWeight[], int n, int i)
{
    int largest, l, r;
    largest = i;
    l = 2 * i + 1;
    r = 2 * i + 2;

    if (l < n && profitToWeight[l] < profitToWeight[largest])
    {
        largest = l;
    }
    if (r < n && profitToWeight[r] < profitToWeight[largest])
    {
        largest = r;
    }

    if (largest != i)
    {
        swap(&profit[i], &profit[largest]);
        swap(&weight[i], &weight[largest]);
        swap(&profitToWeight[i], &profitToWeight[largest]);

        heapify(profit, weight, profitToWeight, n, largest);
    }
}

// sorting profitToWeight array as well as profit and weight array too on the basis of profitToWeight array
void heapSort(float profit[], float weight[], float profitToWeight[], int size)
{
    int i;
    for (i = (size / 2) - 1; i >= 0; i--)
    {
        heapify(profit, weight, profitToWeight, size, i);
    }

    for (i = size - 1; i >= 0; i--)
    {
        swap(&profit[i], &profit[0]);
        swap(&weight[i], &weight[0]);
        swap(&profitToWeight[i], &profitToWeight[0]);

        heapify(profit, weight, profitToWeight, i, 0);
    }
}

// this function generates a profitToWeight array with help of profit / weight for each object
void generateProfitToWeightArray(float profit[], float weight[], float profitToWeight[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        profitToWeight[i] = (float)profit[i] / weight[i];
    }
}

// this function calculates profit on the basis on knapsack rules
float calculateProfit(float profit[], float weight[], float profitToWeight[], int size, int bagSize)
{
    int i;
    float calculatedProfit = 0;
    for (i = 0; bagSize != 0; i++)
    {
        if (weight[i] <= bagSize)
        {
            bagSize -= (int)weight[i];
            calculatedProfit += profit[i];
        }
        else
        {
            calculatedProfit += profit[i] * ((float)bagSize / weight[i]);
            bagSize = 0;
        }
    }
    return calculatedProfit;
}

void main()
{
    int n, i, bagSize;
    printf("\n\n ==============================================================================================================");
    printf("\n|\t\t\t\t       Implementaion of Knapsack Problem                                       |");
    printf("\n ==============================================================================================================\n\n");
    printf("Enter the bag size: ");
    scanf("%d", &bagSize);
    printf("Enter the numer of objects you are willing to add: ");
    scanf("%d", &n);

    float profit[n], weight[n], profitToWeight[n], generatedProfit;

    for (i = 0; i < n; i++)
    {
        printf("Enter profit for object %d: ", i + 1);
        scanf("%f", &profit[i]);
        printf("Enter weight for object %d: ", i + 1);
        scanf("%f", &weight[i]);
    }

    generateProfitToWeightArray(profit, weight, profitToWeight, n);

    heapSort(profit, weight, profitToWeight, n);

    generatedProfit = calculateProfit(profit, weight, profitToWeight, n, bagSize);
    printf("\nProfit is: %f", generatedProfit);

    getch();
}