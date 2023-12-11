/**
 * @file functions.c
 * @author Dinesh A
 * @brief Functions
 * @version 0.1
 * @date 2022-9-12
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include<stdio.h>
#include<math.h>

/**
 * @brief CAGR Calculation
 * 
 * @return int 
 */
int cagr()  
{  
    float beginningvalueofinvestment,endingvalueofinvestment,noofyearsofinvestment,cagr,value,futurevalue;

    printf (" Enter the Beginning Value Of Investment: ");  
    scanf ("%f", &beginningvalueofinvestment);

    printf (" Enter the Ending Value Of Investment: ");  
    scanf ("%f", &endingvalueofinvestment);

    printf (" Enter the No.of Years Of Investment: ");  
    scanf ("%f", &noofyearsofinvestment);  

    futurevalue = (endingvalueofinvestment/beginningvalueofinvestment)/noofyearsofinvestment;

    printf ("%0.2f", futurevalue);   
} 

/**
 * @brief Discount Calculation
 * 
 * @return int 
 */
int discountcalculator()  
{  
    float totalprice,discount,futurevalue;

    printf (" Enter the Price: ");  
    scanf ("  %f", &totalprice);  
    printf (" Enter the Discount (in percentage): ");  
    scanf ("  %f", &discount);  
    
    futurevalue = (discount*totalprice)/100;

    printf ("%0.2f", futurevalue);  
}

/**
 * @brief PPF Calculation
 * 
 * @return int 
 */
int ppf()  
{  
    float yearlyinvestment,timeperiod,totalvalue;

    printf (" Enter the Yearly Investment: ");  
    scanf ("  %f", &yearlyinvestment);  
    printf (" Enter the Time Period (in years): ");  
    scanf ("  %f", &timeperiod);  
    totalvalue = (yearlyinvestment*7.1*timeperiod)/100;    
    printf ("%0.2f", totalvalue);  
}

/**
 * @brief EMI Calculation
 * 
 * @return int 
 */
int emi()  
{
    float totalamount, interestrate, timeperiod, totalemi;

    printf("Enter Total Amount: ");
    scanf("%f", &totalamount);

    printf("Enter Interest rate: ");
    scanf("%f", &interestrate);

    printf("Enter Time Period (in year): ");
    scanf("%f", &timeperiod);

    interestrate = interestrate / (12 * 100);
    timeperiod = timeperiod * 12;

    totalemi = (totalamount * interestrate * pow(1 + interestrate, timeperiod)) / (pow(1 + interestrate, timeperiod) - 1);

    printf("%0.2f", totalemi);

    return 0; 
}

/**
 * @brief RD Calculation
 * 
 * @return int 
 */
int rd()  
{  
    float deposit, years, interest, totalvalue, months, totaldeposit, totalinterest;

    printf (" Enter the Monthly RD Deposit: ");  
    scanf ("  %f", &deposit);

    printf (" Enter Number of Years: ");  
    scanf ("  %f", &years);

    printf (" Enter RD Interest Rate: ");  
    scanf ("  %f", &interest); 

    months = years * 12;

    totaldeposit = months * deposit;

    totalinterest = deposit * months * (months + 1) * interest/24;

    totalvalue = totaldeposit + totalinterest;

    printf ("%0.2f", totalvalue);  
} 

/**
 * @brief FD Calculation
 * 
 * @return int 
 */
int fd()  
{    
    float principle, interest, term, totalvalue;

    printf (" Enter the Principle Amount: ");  
    scanf ("  %f", &principle);

    printf (" Enter the Interest Rate: ");  
    scanf ("  %f", &interest);

    printf (" Enter the Term: ");  
    scanf ("  %f", &term);  
  
    totalvalue = principle * (1 + (interest * term));

    printf ("%0.2f", totalvalue);  
}

/**
 * @brief SIP Calculation
 * 
 * @return int 
 */
int sip()  
{  
    float monthlysipamount,sipperiod,expectedreturnrate,futurevalue,totalvalue;

    printf (" Enter a Monthly SIP Amount: ");  
    scanf ("  %f", &monthlysipamount);

    printf (" Enter a SIP Period(in Years): ");  
    scanf ("  %f", &sipperiod);

    printf (" Enter a Expected Return Rate: ");  
    scanf ("  %f", &expectedreturnrate);

    futurevalue = monthlysipamount * ((pow((1 + expectedreturnrate / 100), sipperiod) - 1));

    totalvalue = futurevalue + monthlysipamount; 


    printf ("%0.2f", totalvalue); 
}

/**
 * @brief LumpSum Calculation
 * 
 * @return int 
 */
int lumpsum()  
{   
    float presentvalue, rateofinterest, numberofyears,lumpsum,futurevalue;


    printf (" Enter a number to get the Present Value: ");  
    scanf ("  %f", &presentvalue);

    printf (" Enter a number to get the Rate of Interest (Annual): ");  
    scanf ("  %f", &rateofinterest);

    printf (" Enter a number to get the Number of Years: ");  
    scanf ("  %f", &numberofyears);  

    futurevalue = presentvalue * pow(1 + rateofinterest/12, numberofyears);

    printf ("%0.2f", futurevalue); 
}
