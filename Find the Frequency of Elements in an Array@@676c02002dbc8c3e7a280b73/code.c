#include <stdio.h>

void findFrequency(int arr[], int n) {
    int visited[n];

    for(int i = 0;i<n;i++){
        visited[n]=0;
    }

    for(int i = 0;i<n;i++){
        if(visited[i]){
            continue;
        }
        int count = 1;
        for(int j = 0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                visited[j]=1;
            }
        }
        printf("%d %d\n",arr[i],count);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    findFrequency(arr, n);
    return 0;
}


