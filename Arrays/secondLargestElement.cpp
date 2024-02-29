vector<int> getSecondOrderElements(int n, vector<int> a) {

    // Write your code here.

    vector<int>ans;

   //second_max value

     int maxi=-1;

   for(int i=0;i<n;i++){

       if(a[i]>maxi){

           maxi=a[i];

       }

   }

   int second_maxi = -1;

   int i=0;

   while(i<n){

       if(a[i]>second_maxi){

           if(a[i]<maxi){

               second_maxi=a[i];

           }

       }

       i++;

   }

   //second min value

   int mini=INT_MAX;

   for(int i=0;i<n;i++){

       if(a[i]<mini){

           mini=a[i];

       }

   }

   int second_mini = INT_MAX;

   int j=n-1;

   while(j>=0){

       if(a[j]<second_mini){

           if(a[j]>mini){

               second_mini=a[j];

           }

       }

       j--;

   }

   ans.push_back(second_maxi);

   ans.push_back(second_mini);

   return ans;

}
 