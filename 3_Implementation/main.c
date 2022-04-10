
#include <stdio.h>   
#include <math.h>  
#include <stdlib.h>  
      
/**
 * @brief function declarations
 * 
 * @return int 
 */
int cagr();  
int discountcalculator();  
int ppf();  
int emi();  
int rd();  
int fd();
int sip();
int lumpsum();

void exit();  
  
int main()  
{  
    /**
     * @brief declaration a local variable options
     * 
     */
    int options;  
    do  
    {  
        /**
         * @brief displays the multiple operations of the C Calculator 
         * 
         */
        printf (" Select an operation to perform the calculation in Financial Calculator: ");  
        printf (" \n 1 CAGR \n 2 Discount Calculator \n 3 PPF \n 4 EMI \n 5 RD \n 6 FD \n 7 Sip \n 8 LumpSum \n 9 Exit \n Please, Make a choice ");      

        /**
         * @brief accepts a numeric input to choose the operation
         * 
         */
        scanf ("%d", &options);  
      
      
    /**
     * @brief use switch statement to call an operation
     * 
     */
    switch (options)  
    {  
        case 1:
        /**
         * @brief It call the cagr() function
         * 
         */
            cagr();
        /**
         * @brief break the function
         * 
         */
            break;  
              
        case 2:
        /**
         * @brief It call the discountcalculator() function
         * 
         */
            discountcalculator();
        /**
         * @brief break the function 
         * 
         */
            break; 
              
        case 3:
        /**
         * @brief It call the ppf() function
         * 
         */
            ppf();
        /**
         * @brief break the function
         * 
         */
            break;  
              
        case 4:
        /**
         * @brief It call the emi() function
         * 
         */
            emi();
        /**
         * @brief break the function
         * 
         */
            break;  
              
        case 5:
        /**
         * @brief It call the rd() function
         * 
         */
            rd();
        /**
         * @brief break the function
         * 
         */
            break;  
              
        case 6:
        /**
         * @brief It call the fd() function
         * 
         */
            fd();
        /**
         * @brief break the function
         * 
         */
            break;
        
        case 7:
        /**
         * @brief It call the sip() function
         * 
         */
            sip();
        /**
         * @brief break the function
         * 
         */
            break;

        case 8:
        /**
         * @brief It call the lumpsum() function
         * 
         */
            lumpsum();
        /**
         * @brief break the function
         * 
         */
            break;
                     
        case 9:
        /**
         * @brief It call the exit() function  to exit from the program
         * 
         */
            exit(0);
        /**
         * @brief break the function
         * 
         */
            break;  
              
        default:  
            printf(" Something is wrong!! ");  
            break;                        
    }  
    printf (" \n \n **************** \n ");  
    } while (options != 9);  
        
    return 0;
}