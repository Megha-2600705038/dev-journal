#include <stdio.h>

struct Item
{
    int weight;
    float ratio;
    int profit;
};

int main(){
    int n, i, j;
    float capacity, maxProfit = 0;

    printf("Enter number of items : ");
    scanf("%d",&n);
    struct  Item item[n];
    
    printf ("Enter weight and profit of each item : ");
    for (int i=0; i<n; i++){
        scanf("%d %d",&item[i].weight, &item[i].profit);
        item[i].ratio = (float)item[i].profit/item[i].weight;
    }

    printf("Enter capacity of knapsack : ");
    scanf("%f",&capacity);

    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if (item[i].ratio < item[j].ratio){
                struct Item temp = item[i];
                item[i] = item[j];
                item[j] = temp;
            }
        }
    }
    
    for(int i=0; i<n; i++){ 
        if(capacity >= item[i].weight){
            capacity = capacity - item[i].weight;
            maxProfit = maxProfit + item[i].profit;
        }else{
            maxProfit = maxProfit + (item[i].ratio * capacity);
            capacity = 0;
            break;
        }
    }
    printf("Maximum profit = %2f\n",maxProfit);
    return 0;

}
