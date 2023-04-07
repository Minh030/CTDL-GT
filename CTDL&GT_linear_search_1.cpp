Nguồn: https://codelearn.io/learning/data-structure-and-algorithms/819552
int search(int a[], int n, int x){
	for (int i = 0; i < n; i++){
		if (a[i] == x){
			return i;
		}
	}
	return -1;
}
