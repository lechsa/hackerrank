int main(){
   vector< vector<int> > arr(6,vector<int>(6));
   for(int arr_i = 0;arr_i < 6;arr_i++){
      for(int arr_j = 0;arr_j < 6;arr_j++){
         cin >> arr[arr_i][arr_j];
      }
   }

   // if the max hourglass sum is negative
   // set max_sum to the minimum value possible
   int max_sum = INT_MIN; // or -63 (see constraints)
   int jj = 0;
      
   for(int i = 0;i < 4;i++) {

      int sum = 0;

      for(int j = jj;j < jj+3;j++) {
         sum += arr[i][j];
         if(j==jj) sum += arr[i+1][jj+1];
         sum += arr[i+2][j];
      }

      if (jj < 3) {
         jj++;
      } else {
         jj = 0;
      }

      if(sum > max_sum) max_sum = sum;
      if(jj != 0) i--;
   }

   cout << max_sum;

   return 0;
}