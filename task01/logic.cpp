//сортировка вставками более эффективна
void insertion_Sort(int arr[], int n)
{
    int i, key, j;
    for (i = 0; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while ( arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j +1] = key;
    }
}
