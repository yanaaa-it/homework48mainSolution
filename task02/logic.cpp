void Selection_Sort(int arr[], int n)
{
    for (int i = 0; i < n; ++i) {

        int min =i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
     
        int t = arr[i];      
        arr[i] = arr[min];
        arr[min] = t;
    }
       
    }
