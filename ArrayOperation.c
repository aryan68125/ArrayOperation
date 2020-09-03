#include<stdio.h>

void InputElements(int arr[],int n) //function to input the elements inside the array
{
	printf("Input the elements inside the array\n");
for(int i=0;i<n;i++)
{
	scanf("%d", &arr[i]); //logic to input the array elements
}
}//InptElements closed

void display(int arr[],int n) //function to traverse the array
{
printf("Performing Traversal operation on array\n");
for(int i=0;i<n;i++)
{
	printf("arr[%d] = %d\n",i, arr[i]); //logic to traverse the array elements
}
}//display closed

int Insertion(int arr[], int n, int element, int capacity, int position) //Function to perform insertion operation on the array
{
	if(n >= capacity) // condition for insertion
	{
		printf("capacity reached ...cannot add anymore element\n");
		return -1;
	}
for (int i= n-1 ; i>= position; i--) //shifting lements inside the array 
{
	arr[i+1]=arr[i];
}
arr[position]=element;//inserting the element in the desired position of the array
return 1;
}// insertion closed

int Deletion(int arr[], int n, int position) //function performing deletion operation on the array using the position method
{
	if(position<=n)
	{
	printf("Deleting %d from the array in position %d \n", arr[position], position);
	for(int i=position; i<n-1; i++)
	{
      arr[i]=arr[i+1];
	}
}

else 
{
	printf("array position you entered does not hold any data\n");
}

return 1;

}//deletion closed

int LinearSearch(int arr[], int n, int element) //Linear search operation on array
{
for(int i =0;i<n;i++)
{
    if(arr[i]==element)
    {
    		return i;
    }
}
return -1;
}//Linear search closed

void update(int arr[], int n, int position, int element) //update operation on array
{
	if(position<n) //position should be less than equal to number of elements inside the array
	{
		arr[position]=element;
		printf("Update element in array operation complete...\n");
	}
	else
	{
		printf("Update operation unsuccessful\n");
	}
}//Update closed

int main()
{
	int arr[100]; // declaring array of capacity to hold 100 elements

	int size ; //number of elements to store inside the array

	printf("Enter the number of Elements that is to be Entered inside the array\n");
	printf("Note: the max size should be less than 100\n");
scanf("%d", &size); //enter the number of elements that is to Entered inside the array

int ch; //choice in switch statement

int k=1; //menue loop variable

int element; //element to be inserted inside the array

int position; //define the position at which you want to insert the element

int index; //index of array where the element is found in linear search

InputElements(arr,size); //calling function that will input the elements

// menue loop 
do{
printf("Press 1 to perform Traversal operation\n");
printf("Press 2 to perform Insertion operation\n");
printf("Press 3 to perform Deletion operation\n");
printf("Press 4 to perform Linear Search operation\n");
printf("Press 5 to perform Update operation\n");
printf("Press 6 to exit the program\n");
scanf("%d", &ch);
printf("\n");
switch(ch)
{
case 1:
display(arr,size);
printf("\n");
break;

case 2:
printf("Enter the element you want to insert inside the array\n");
	scanf("%d", &element);
	printf("Enter the position at which you want to insert the element inside the array\n");
	scanf("%d", &position);
Insertion(arr,size, element,100, position);
size++;
printf("size oh the array is now after insertion = %d\n", size);
printf("\n");
break;

case 3:
printf("Enter the position of the element in the array you want to Delete from the array\n");
	scanf("%d", &position);
Deletion(arr,size, position);
size--;
printf("\n");
break;

case 4:
printf("Enter the element that is to be found inside the array\n");
scanf("%d", &element);
index = LinearSearch(arr,size,element);
if(index != -1)
{
	printf("%d is found at position %d in array\n", element,index);
}
else
{
	printf("%d not present in array\n",element);
}
break;

case 5:
printf("Enter the element you want to insert inside the array\n");
	scanf("%d", &element);
	printf("Enter the position at which you want to insert the element inside the array\n");
	scanf("%d", &position);
update(arr, size, position, element);
break;

case 6:
printf("Program Terminated\n");
k=200;
break;

default:
printf("Wrong choice ...Please try again");
break;

}//switch closed

} //while loop closed
while(k<100);

	return 0;
}//main closed