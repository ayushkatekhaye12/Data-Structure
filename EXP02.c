
// Write a program to search a key element in the given array of elements using binary search.

#include<stdio.h>
void main() {
	int a[20], i, j, n, key, flag = 0, low, high, mid, temp;
	printf("Enter value of n : ");
	scanf("%d", &n);
	// Write the code to read an array of elements
	for(i=0;i<n;i++){
	printf("Enter element for a[%d] : ",i);
	scanf("%d",&a[i]);
	}
	printf("Enter key element : ");
	scanf("%d", &key);
	// Write the code to sort the elements using any sorting technique
	for(i=0;i<n;i++){
	for(j=0;j<n-1;j++){
	if(a[j]>a[j+1]){
	temp = a[j];
	a[j] = a[j+1];
	a[j+1] = temp;
	}
	}
	}
    printf("After sorting the elements in the array are\n");
	// Write the code to display the elements
	low = 0; // Complete the statement
	high = n-1; // Complete the statement
	// Write the code to search an element using  binary search process
	while(high>=low){
	mid = (low+high)/2;
	if(key == a[mid]){
		break;
	}
	else{
	if (key>a[mid]){
	low = mid + 1;
	}
	else{
	high = mid - 1;
	}
	}
}
for(i=0;i<n;i++){
	printf("Value of a[%d] = %d\n",i,a[i]);
}
	if (key == a[mid]) { // Write the condition part
		printf("The key element %d is found at the position %d\n",key,mid); // Complete the statement
	} else {
		printf("The Key element %d is not found in the array\n",key); // Complete the statement
	}
}
