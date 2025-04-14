void countFrequencies(int arr[], int n) {
    int freq[100] = {0};  // Assuming elements are in range [0, 99]

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }
}
