#include <stdio.h>


double calculateDrugA( int age ){
    int A ;
    if( age < 18 ){
        A = 25 ;
    }
    else if( age >= 18 && age < 65 ){
        A = 45 ;
    }
    else if( age >= 65 ){
        A = 30 ;
    }
    return A ;
    
}

double calculateDrugB( int age ){
    int B ;
    int A ;
    
    if( age < 18 ){
        A = 25 ; 
        B = 2*A ; 
    }
    else if( age >= 18 && age < 65 ){
        A = 45 ;
        B = 5*A ;
    }
    else if( age >= 65 ){
        A = 30 ;
        B = 3*A;
    }
    return B ;
}

double calculateDrugC( int age , char gender ){
    int C ;
    int A  ;
    int B  ;
    if( age < 18 ){
        A = 25 ;
        B = 2*A ;
        if( gender == 'F'){
            C = 30 + B - 1.5 * (A/3);
        }
            else if( gender == 'M'){
                C = 30 + B - 1.5 * (A/2);
            }
        return C;
    }
    else if( age >= 18 && age < 65 ){
        A = 45 ;
        B = 5*A;
        if( gender == 'F'){
            C = 40 + 2*B - 3* (A/3);
        }
        else if( gender == 'M'){
            C = 40 + 2*B - 3* (A/2);
        }
    return C; 
    }    
    else if( age >= 65  ){
            A = 30 ;
            B = 3*A ;
            if( gender == 'F'){
                C = 35 + B - 2.5* (A/3);
            }
            else if( gender == 'M'){
                C = 35 + B - 2.5*(A/2);
            }
        return C ;
        }
        
    }
    

int main()
{
   
   int age ;
   char gender ;
   printf("Enter your age and gender:\n");
   scanf("%d %c", &age, &gender);
   
   
   
   printf("For gender %c :\n",gender);
   
   /* calculateDrugA( age );
   calculateDrugB( age );
   calculateDrugC( age , gender );*/
   
   printf("For drug A dosage = %fmg\n",calculateDrugA( age ));
   printf("For drug B dosage = %f\n",calculateDrugB( age ));
   printf("For drug C dosage = %f\n",calculateDrugC( age, gender ));

    return 0;
}
