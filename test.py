# function Pow(x, y)
# {
#     var i, temp;
#     temp := 1;
#     if(y < 0) then
#     {
#         temp := 1 / x;
#     }
 
#     foreach i from 0 to y
#     {
#         temp := temp * x;
#     }
    
#     return temp;
# }


# function Swap(array arr, first, second)
# {
#     var temp;
#     temp := arr[first];
#     arr[first] := arr[second];
#     arr[second] := temp;
# }

# arr = [1, 2]
# Swap(arr, 1, 3)
# arr = [2, 1]

# arr = [1,2,3,4,5]
# Swap(arr)


# function rotateLeft(array a, N){

#     var size_a := length(a);
#     var temp, i, j;
    
#     foreach i from 0 to N
#     {
#         temp := a[0];
        
#         foreach j from 0 to size_a - 1
#         {
#             a[j] := a[j + 1];
#         }
#         a[size_a - 1] := temp;
#     }
# }

# nums := [4, 5, 6, 7, 1, 2, 3];
# count := 4;
# rotateLeft(nums, count);

# nums[1, 2, 3, 4, 5, 6, 7]


# function mergeTwoSortedArrays(array a1, array a2){

#     var a1_size := length(a1);
#     var a2_size := length(a2);
#     var merged_size := a1_size + a2_size;

#     array merged_array := [merged_size];
#     var i;
    
#     foreach i from 0 to a1_size
#     {
#         merged_array[i] := a1[i];
#     }
    
#     foreach i from 0 to a2_size
#     {
#         merged_array[i + a1_size] := a2[i];
#     }
    
#     return merged_array;

# }

# nums1 := [1, 2, 3];
# nums2 := [4, 5, 6, 7];

# mergeTwoSortedArrays(nums1, nums2);

# nums[1, 2, 3, 4, 5, 6, 7]