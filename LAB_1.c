#include <stdio.h>


float calculate_final_point( int midterm_point , int final_pt ){
    midterm_point = midterm_point * 40 / 100 ;
    final_pt = final_pt * 60 / 100 ;
    float final_point = midterm_point + final_pt ;
    return final_point ;
}


char calculate_letter_grade( float final_point ){
    
    if( final_point >= 85.0 && final_point <= 100.0 ){
        return 'A' ;
    }
    else if( final_point >= 75.0 && final_point <= 84.0 ){
        return 'B' ;
    }
    else if( final_point >= 60.0 && final_point <= 74.0 ){
        return 'C';
    }
    else if( final_point >= 50.0 && final_point <= 59.0 ){
        return 'D';
    }
    else if( final_point >= 0.0 && final_point <= 49.0 ){
        return 'F';
    }
}
int main()
{
   char name[20] ;
   printf(" Enter your name: ");
   scanf("%s",&name);
   int midterm_point ;
   printf(" Enter your midterm grade: ");
   scanf("%d", &midterm_point);
   int final_pt ;
   printf(" Enter your final point: ");
   scanf("%d",&final_pt);
   
   float final_p = calculate_final_point( midterm_point, final_pt );
   char letter = calculate_letter_grade( final_p );
   printf("Dear %s , your final letter is: %c .", name, letter );
   

    return 0;
}
