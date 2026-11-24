//Question 1 : Score Validator function
bool scoreChecker(int score ){
   if (score >= 0 && score <= 100 )
   {
    if (score >= 90 )
       Serial.print("Grade: A ");
    else if (score >= 89 )
       Serial.print("Grade: B ");
    else if (score >= 79 )
       Serial.print("Grade: C ");
    else if (score >= 69 )
       Serial.print("Grade: D ");
    else 
       Serial.print("Grade: F ");
    return 1 ;
   }
   else 
   {
   Serial.print("Invalid score! ");
   return 0 ;
   }
}

void setup() {
  Serial.begin(115200);

  //Question 2 : Array Printer
  int arr1[5] = {10,25,7,42,18};
  Serial.print("Array elements: ");
  for (int i = 0 ; i < 5 ; i++ ){
    Serial.printf("%d " , arr1[i]);
  }
  Serial.println();

  //Question 3 : Array,sum , product Printer 
  int arr2[4] = {2,5,3,4};
  int sum = 0 , product = 1 ;
  Serial.print("Array elements: ");
  for (int i = 0 ; i < 4 ; i++ ){
    Serial.printf("%d " , arr2[i]);
    sum += arr2[i] ;
    product *= arr2[i] ;
  }
  Serial.println();
  Serial.printf("Sum: %d" , sum );
  Serial.println();
  Serial.printf("Product: %d" , product );
  Serial.println();

  //Question 4 : Star bar chart
  int arr3[4] = {3,6,2,5};
  for (int i = 0 ; i < 4 ; i++ ){
    for (int j = 0 ; j < arr3[i] ; j++ )
        Serial.print("*");
    Serial.println();
  }

  //Question 5 : Number , its square ,its cube Printer
  for (int i = 1 ; i <= 4 ; i++){
    Serial.printf("%d %d %d " , i , i*i , i*i*i);
    Serial.println();
  }

  //Question 6 : Score report and Star chart
  int arr4[6] = {95,120,52,-5,79,84};
  Serial.print("Scores: ");
  for (int i = 0 ; i < 6 ; i++ ){
    Serial.printf("%d " , arr4[i]);
  }
  Serial.println();
  for (int i = 0 ; i < 6 ; i++ ){
    Serial.printf("Score %d: %d " ,i+1 ,arr4[i]);
    if (scoreChecker(arr4[i])){
    for (int j = 0 ; j < (arr4[i]/10) ; j++)
       Serial.print("*");
    }
    Serial.println();
  }
  
}

void loop() {
  // put your main code here, to run repeatedly:

}

