#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include <time.h>
void bubble_sort(int [], int);
void insertion_sort(int[],int);
void selection_sort(int [],int);
void quicksort(int[], int, int);
void mergeSort(int [], int, int, int);
void partition(int [],int, int);
void main()
{
	int choice;
	int sz,randArray[sz];
	int i;
	int s1,s2,s3,s4,s5;
	int q,r,u,v;
	time_t start, end;
    start = time(NULL);
   
	while(1)
	{
		printf("..........MENU..........\n");
		printf(" 1.BUBBLLE SORT\n 2.INSERTION SORT\n 3.SELECTION SORT\n 4.QUICK SORT\n 5.MERGE SORT\n 6.COMPARE\n 7.EXIT\n");
		printf("\n Enter the choice : ");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1 : 

  			printf("Enter the size of array::");
   			scanf("%d",&sz);
   			for(i=0;i<sz;i++)
     		{	
			 	randArray[i]=rand()%100; 
			}  //Generate number between 0 to 99
   			printf("\nElements of the array::\n");
   			for(i=0;i<sz;i++)
   			{
     			printf(" %d %d \n",i+1,randArray[i]);
   			}
   			printf(" ");
   			bubble_sort(randArray,sz);
   			printf("after sorting in ascending order is : : \n");
   			for(i=0;i<sz;i++)
   			{
   	 			printf("%d ",randArray[i]);
   			}
   			printf(" ");

     				
     			end = time(NULL);
    			printf("\nTime taken to print bubble sort is %.2f seconds\n",difftime(end, start));
    			s1 = difftime(end, start);
    			//printf("\nTime taken to print bubble sort is %2f seconds\n",s1);
				
				break;
				
			case 2 :
				
			printf("Enter the size of array::");
   			scanf("%d",&sz);
   			for(i=0;i<sz;i++)
     			randArray[i]=rand()%100;   //Generate number between 0 to 99
   			printf("\nElements of the array::\n");
   			for(i=0;i<sz;i++)
   			{
     			printf(" %d %d \n",i+1,randArray[i]);
   			}
   			printf(" ");
   			insertion_sort(randArray,sz);
   			printf("after sorting in ascending order is : : \n");
   			for(i=0;i<sz;i++)
   			{
   	 			printf("%d ",randArray[i]);
   			}
   			printf(" ");

					
				end = time(NULL);
    			printf("\nTotal time taken to print  is %.2f seconds\n",difftime(end, start));
    			s2 = difftime(end, start);
    			q = s2-s1;
    			printf("\nTime taken to print insertion sort is %d seconds\n",q);
				
				break;
				
			case 3 :
    		
    		printf("Enter the size of array::");
   			scanf("%d",&sz);
   			for(i=0;i<sz;i++)
     			randArray[i]=rand()%100;   //Generate number between 0 to 99
   			printf("\nElements of the array::\n");
   			for(i=0;i<sz;i++)
   			{
     			printf(" %d %d \n",i+1,randArray[i]);
   			}
   			printf(" ");
   			selection_sort(randArray,sz);
   			printf("after sorting in ascending order is : : \n");
   			for(i=0;i<sz;i++)
   			{
   	 			printf("%d ",randArray[i]);
   			}
   			printf(" ");

    			end = time(NULL);
    			printf("\nTotal time taken to print  is %.2f seconds\n",difftime(end, start));
    			s3 = difftime(end, start);
    			r = s3-s2;
   				printf("\nTime taken to print selection sort is %d seconds\n",r);
   				
				break;
				
			case 4 :
 			
 			printf("Enter the size of array::");
   			scanf("%d",&sz);
   			for(i=0;i<sz;i++)
     			randArray[i]=rand()%100;   //Generate number between 0 to 99
   			printf("\nElements of the array::\n");
   			for(i=0;i<sz;i++)
   			{
     			printf(" %d %d \n",i+1,randArray[i]);
   			}
   			printf(" ");
   			quicksort(randArray,0,sz-1);
   			printf("after sorting in ascending order is : : \n");
   			for(i=0;i<sz;i++)
   			{
   	 			printf("%d ",randArray[i]);
   			}
   			printf(" ");

    		
    			end = time(NULL);
    			printf("\nTotal time taken to print is %.2f seconds\n",difftime(end, start));
    			s4 = difftime(end, start);
    			u = s4-s3;
    			printf("\nTime taken to print quick sort is %d seconds\n",u);
    			
    			break;
    			
    		case 5 :
    		
    		printf("Enter the size of array::");
   			scanf("%d",&sz);
   			for(i=0;i<sz;i++)
     			randArray[i]=rand()%100;   //Generate number between 0 to 99
   			printf("\nElements of the array::\n");
   			for(i=0;i<sz;i++)
  			{
     			printf(" %d %d \n",i+1,randArray[i]);
   			}
   			printf(" ");
   			partition(randArray, 0, sz - 1);
   			printf("after sorting in ascending order is : : \n");
   			for(i=0;i<sz;i++)
   			{
   	 			printf("%d ",randArray[i]);
   			}
   			printf(" ");

    				end = time(NULL);
    				printf("\nTotal time taken to print  is %2f seconds\n",difftime(end, start));
    				s5 = difftime(end, start);
    				v = s5-s4;
   					printf("\nTime taken to print merge sort is %d seconds\n",v);
   					
    			break;
    			
    		case 6 :
    			if(s1 < q && s1 < r && s1 < u && s1<v)
				{
					printf("%d bubble sort is smallest taken time \n so this sort is best\n",s1);
				}
				else if(q < r && q<u && q<v)
				{
					printf("%d insertion sort is smallest taken time\n so this sort is best \n",q);
				}
				else if(r<u && r<v)
				{
					printf("%d selection sort is smallest taken time\n so this sort is best \n",r);
				}
				else if(u<v)
				{
					printf("%d quick sort is smallest taken time \n so this sort is best\n", u);
				}
				else
				{
					printf("%d merge sort is smallest taken time \n so this sort is best\n",v);
				}	
				break;
				
			case 7 :
				exit(0);
				
			default :
				printf("\n Wrong selection  !!! Try again !!!");
		}
	}
	getch();
}


void bubble_sort(int randArray[],int sz)
{
		int i,j,swap;
	for(i=0;i<sz-1;i++)   // loop to acceess array elements
	{
		for(j=0;j<sz-i-1;j++) // loop to compare array elements
		{
			if(randArray[j]>randArray[j+1])
			{
				swap=randArray[j];
				randArray[j]=randArray[j+1];
				randArray[j+1]=swap;
			}
		}
	}
}


void insertion_sort(int randArray[], int sz)
{
	int i,j,key;
	for(i=1; i<sz; i++) // compaering start from index 1 thats why i value start from 1
	{
		key = randArray[i]; // i value stores in the key 
		j = i-1; // j means jetar sathe amra compare korbo key value ta
		while(j>=0 && randArray[j]>key)
		{
			randArray[j+1] = randArray[j];
			j = j-1;
		}
		randArray[j+1]=key;
/*		for(j=0; j<sz; j++)
			printf("%d ", randArray[j]);
		printf("\n");
		*/	
	}
}


void selection_sort(int randArray[], int sz)
{
    int i,j,min,swap;
    for(i=0;i<sz-1;i++)
    {
        min = i;
        for (j=i+1;j<sz;j++)
        {
            if (randArray[j]< randArray[min])
            {
                min = j;
            }
        }
        if (min != i);
        {
            swap = randArray[i];
            randArray[i]= randArray[min];
            randArray[min]= swap;
        }
/*        for(j=0; j<sz; j++)
        	printf("%d ", a[j]);
        printf("\n");*/
    }
}


void quicksort(int randArray[], int low, int high)
{
    int pivot, i, j, temp;
    if (low < high)
    {
        pivot = low;
        i = low;
        j = high;
        while (i < j) 
        {
            while (randArray[i] <= randArray[pivot] && i <= high)
            {
                i++;
            }
            while (randArray[j] > randArray[pivot] && j >= low)
            {
                j--;
            }
            if (i < j)
            {
                temp = randArray[i];
                randArray[i] = randArray[j];
                randArray[j] = temp;
            }
        }
        temp = randArray[j];
        randArray[j] = randArray[pivot];
        randArray[pivot] = temp;
        quicksort(randArray, low, j - 1);
        quicksort(randArray, j + 1, high);
        
    }
}


void partition(int randArray[],int low,int high)
{
    int mid;
 
    if(low < high)
    {
        mid = (low + high) / 2;
        partition(randArray, low, mid);
        partition(randArray, mid + 1, high);
        mergeSort(randArray, low, mid, high);
    }
}
 
void mergeSort(int randArray[],int low,int mid,int high)
{
    int i, mi, k, lo, temp[50];
 
    lo = low;
    i = low;
    mi = mid + 1;
    while ((lo <= mid) && (mi <= high))
    {
        if (randArray[lo] <= randArray[mi])
        {
            temp[i] = randArray[lo];
            lo++;
        }
        else
        {
            temp[i] = randArray[mi];
            mi++;
        }
        i++;
    }
    if (lo > mid)
    {
        for (k = mi; k <= high; k++)
        {
            temp[i] = randArray[k];
            i++;
        }
    }
    else
    {
        for (k = lo; k <= mid; k++)
        {
             temp[i] = randArray[k];
             i++;
        }
    }
 
    for (k = low; k <= high; k++)
    {
        randArray[k] = temp[k];
    }
}


