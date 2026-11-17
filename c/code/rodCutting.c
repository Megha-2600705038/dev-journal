#include <stdio.h>
#include <limits.h>

int main() {
    int n, price[100], val[100];
    
    printf("Enter the length of the rod: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input.\n");
        return 1;
    }
    
    printf("Enter the prices for pieces of length 1 to %d:\n", n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &price[i]);
    }
    
    val[0] = 0;
    
    for (int i = 1; i <= n; i++) {
        int max_val = INT_MIN;
        
       
        for (int j = 1; j <= i; j++) {
            int current_revenue = price[j] + val[i - j];
            if (current_revenue > max_val) {
                max_val = current_revenue;
            }
        }
        val[i] = max_val; 
    }
    
    printf("\nMaximum obtainable revenue = %d\n", val[n]);
    return 0;
}
