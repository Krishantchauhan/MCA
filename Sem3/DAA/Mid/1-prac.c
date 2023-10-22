#include<stdio.h>

int bs(int arr[],int low,int high,int key){
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==key)
            return mid;
        else if(arr[mid]<key)
            low=mid+1;
        else
            high=mid-1;
    }
    return -1;
}

int bsl(int arr[],int low,int high,int key){
    int idx=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==key){
            idx=mid;
            high=mid-1;
        }            
        else if(arr[mid]<key)
            low=mid+1;
        else
            high=mid-1;
    }
    return idx;
}

int bsr(int arr[],int low,int high,int key){
    int idx=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==key){
            idx=mid;
            low=mid+1;
        }            
        else if(arr[mid]<key)
            low=mid+1;
        else
            high=mid-1;
    }
    return idx;
}

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void selection(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int mn=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[mn])
                mn=j;
        }
        swap(&arr[mn],&arr[i]);
    }

    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
}

void merge(int arr[],int low,int high,int mid){
    int n1=mid-low+1;
    int n2=high-mid;

    int left[n1],right[n2];
    for(int i=0;i<n1;i++)
        left[i]=arr[low+i];
    for(int i=0;i<n2;i++)
        right[i]=arr[mid+1+i];

    int i=0,j=0,k=low;
    while(i<n1 && j<n2){
        if(left[i]<right[j])
            arr[k++]=left[i++];
        else
            arr[k++]=right[j++];
    }

    while(i<n1)
       arr[k++]=left[i++]; 

    while(j<n2)
       arr[k++]=right[j++]; 
}

void mergesort(int arr[],int low,int high){
    if(low<high){
        int mid=low+(high-low)/2;
        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);
        merge(arr,low,high,mid);
    }
}


int partion(int arr[],int low,int high){
    int piv=arr[high];
    int i=low-1;
    int j=low;
    while(j<high){
        if(piv>arr[j]){
            i++;
            swap(&arr[i],&arr[j]);
        }
        j++;
    }
    swap(&arr[i+1],&arr[high]);
    return i+1;
}

void q(int arr[],int low,int high){
    if(low<high){
        int piv=partion(arr,low,high);
        q(arr,low,piv-1);
        q(arr,piv+1,high);
    }
}


void main(){
    int n;
    scanf("%d",&n);

    int arr[n];
    int mx=-1;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(mx<arr[i])
            mx=arr[i];
    }
    int k;
    scanf("%d",&k);
    
    int key;
    // scanf("%d",&key);
    // int flag=bs(arr,0,n-1,key);
    // if(flag==-1)
    //     printf("not found");
    // else
    //     printf("found at %d",flag+1);


    // int l=bsl(arr,0,n-1,key);
    // int r=bsr(arr,0,n-1,key);
    // if(l!=-1)
    //     printf("%d time ",r-l+1);
    // else
    //     printf("not found");


    // selection(arr,n);
    // int flag=0;
    // mergesort(arr,0,n-1);
    // for(int i=0;i<n-1;i++){
    //     // printf("%d ",arr[i]);
    //     if(arr[i]==arr[i+1]){
    //         printf("Found ");
    //         flag=1;
    //         break;
    //     }
    // }
    // if(flag==0)
    //     printf("Not found");

    // q(arr,0,n-1);

    // for(int i=0;i<n;i++)
    //     printf("%d ",arr[i]);

    
    // int mp[mx+1];
    // for(int i=0;i<=mx;i++)
    //     mp[i]=0;

    // for(int i=0;i<n;i++)
    //     mp[arr[i]]++;

    // int flag=1;
    // for(int i=0;i<=mx;i++){
    //     while(mp[i]>0 && k>0){
    //         mp[i]--;
    //         k--;
    //     }
    //     if(k==0){
    //         printf("%d",i);
    //         flag=0;
    //         break;
    //     }
    // }
    // if(flag){
    //     printf("not found");
    // }

    // int mp[26]={0};

    // for(int i=0;i<n;i++){
    //     mp[arr[i]-'a']++;
    // }

    // int ct=0;
    // int ch=0;
    // for(int i=0;i<26;i++){
    //     if(ct<mp[i]){
    //         ct=mp[i];
    //         ch=i+'a';
    //     }
    // }

    // printf("%c  %d times \n",ch,ct);
}