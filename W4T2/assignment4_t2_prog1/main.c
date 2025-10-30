/**
*@brief A C program that manages the sales data of a store using a one-dimensional array by sorting, showing highest and lowest, above and below average months etc.
*@author Chinmay Mhaskar
*@date 30-10-2025
*/
#include <stdio.h>
#include <stdbool.h>

int main()

{
       printf("2025300145_Chinmay_Mhaskar");
       //initialize notExit to run while loop
    bool notExit = true;
    //initialize currchoice to take user input in switch case
    int currchoice = 0;
    /*initialize i and j to run for loops, maxpos and minpos to store position of max and min sales,
    temp to perform swapping, max and min to store max and min number,total to store total sales, chkm to store month whose data to be returned
    */
    int i = 0,j=0, maxpos = 0, minpos = 0,temp=0, max=0,min=0,total = 0,chkm = 13;
    /* initialize float avg to store average, array arr to store original data, arrm to store month number of data, sarr to stored sorted values
    */
    float avg;
    int arr[12],arrm[12],sarr[12];
    printf("Enter monthly sales data for 12 months (in units):\n");
    /*ask user to input monthly sales data. Initialize every element of arrm
    copy every element into sarr to sort later, and add each element to store total
    */
    for(i=0; i<12; i++)
    {
        arrm[i] = (i+1);
        printf("Month %2d: ",(i+1));
        scanf("%d",&arr[i]);
        if(arr[i]<0)
        {
            i--;
            printf("Enter positive value again");
        }
        else
        {
            sarr[i]=arr[i];
            total += arr[i];
        }
    }
    //calculate average, initialize min to first element
    avg = (total/12);
    min = arr[0];
    //print user menu
    printf("------------- Sales Data Management System -------------\n");
    printf("1. Display All Sales data.\n");
    printf("2. Display highest and lowest sales months\n");
    printf("3. Display total and average yearly sales\n");
    printf("4. Display months where sales performance was above average and below average.\n");
    printf("5. Display sales in Ascending Order\n");
    printf("6. Display 2nd highest and 2nd lowest sales\n");
    printf("7. Search Sales by Month\n");
    printf("8. Display sales reverse order.\n");
    printf("0. Exit program\n");
    printf("--------------------------------------------------------\n");
    //sort duplicated array sarr as well as each of its position (arrm)
    for(i=0;i<11;i++)
    {
                for(j=0;j<11-i;j++)
                {
                    if(sarr[j]>sarr[j+1])
                    {
                        temp = sarr[j];
                        sarr[j] = sarr[j+1];
                        sarr[j+1] = temp;

                        temp = arrm[j];
                        arrm[j] = arrm[j+1];
                        arrm[j+1] = temp;
                    }

                }
    }
    while(notExit)
    {   //ask user to input choice
        printf("Enter your choice: ");
        scanf("%d",&currchoice);
        switch(currchoice)
        {
        case 1:
            //display monthly sales data
            printf("\nMonthly Sales Data(in units):\n");
            for(i=0;i<12;i++)
            {
                    printf("Month %2d: %d\n",(i+1),arr[i]);
            }
            break;
        case 2:
            //find max and min from data entered along with its position
            for(i=0;i<12;i++)
            {
                if(max<arr[i])
                {
                    max = arr[i];
                    maxpos = i;

                }

                if(min>arr[i])
                 {
                     min = arr[i];
                     minpos = i;
                 }
            }
            //print max and min sales with its month
            printf("\nSales Month Summary:\n");
            printf("Highest Sales month: %d with %d units sales\n",maxpos,max);
            printf("Lowest Sales month: %d with %d units sales\n\n",minpos,min);
            break;
        case 3:
            //print total and average yearly sales
            printf("\nTotal and Average Yearly Sales:\nTotal Sales for 12 months: %d units\nAverage Sales in 12 months: %.2f\n",total,avg);
            break;
        case 4:
            //inform user about months that have below average and above average sales
            printf("\nSales Months Performance:\n");
            printf("Poorly Performing Months (Below %.2f units)\n",avg);
            for(i=0;i<12;i++)
            {
                if(arr[i]<avg)
                    printf("Month %2d with %3d units sold\n",(i+1),arr[i]);
            }
            printf("Well Performing Months (Above %.2f units)\n",avg);
            for(i=0;i<12;i++)
            {
                if(arr[i]>avg)
                    printf("Month %2d with %3d units sold\n",(i+1),arr[i]);
            }
            break;
        case 5:
            //print sales data in ascending order ofsales value
            printf("\nSales Data(in units)-(Sorted in Ascending Order):\n");

            for(i=0;i<12;i++)
            {
                printf("Month %2d: %5d\n",arrm[i],sarr[i]);
            }
            break;
        case 6:
            //print second highest and second lowest sales
            printf("\nAdditional Insights:\nSecond Highest Sales: %d\nSecond Lowest Sales: %d\n",sarr[10],sarr[1]);

            break;
        case 7:
            //ask user to input sales month who's sales value is to be seen. if it is not between 1 to 12 ask user again
            while(chkm>12 || chkm<1)
            {
            printf("\nEnter sales Month to check the sales. Please enter a value between 1 and 12: ");
            scanf("%d",&chkm);
            }
            //print sales value for month entered by user
            printf("\nSales recorded for month %d is %d units\n",chkm,arr[chkm-1]);
            break;
        case 8:
            //print monthly sales data in reverse order
            printf("\nMonthly Sales Data(in units)-(Reverse Order):\n");
            for(i=11;i>=0;i--)
            {
                printf("Month %2d: %3d\n",(i+1),arr[i]);
            }
            break;
        case 0:
            //exit the program
            notExit = false;
            printf("\nExiting the program... Thank you!");
            break;
        default:
            //error handling
            printf("Invalid choice! Please select a valid option.\n\n");
            break;
        }

    }
    printf("2025300145_Chinmay_Mhaskar");

    return 0;
}
