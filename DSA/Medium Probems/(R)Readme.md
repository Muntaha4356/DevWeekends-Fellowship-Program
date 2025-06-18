# Intuition
You need hashmap to map numbers like 
<number,frequency of the number>
Then you need to store in a bucket vector...


# Approach
I first stored in hashmap such that it was of the form <number, frequency> so in array like [1,1,1,2,3]
My hashmap will be like [<1, 3>, <2,1>, <3,1>]

Then i made a vector of vectors lets calll the outer vector as major vector and inner vector as minor vector ...
major vector has minor vectors... such that each majorvector[i] has the minor vector of elements of ith frequency.

so majorvector[2] will have a vector of elements that have frequecy 2
I chose to make it nums.size()+1 cuz no number in nums going to have frequency 0 and I didn't wanna deduct one number and ake furthur adjustments.

Then the part was to push thing in answer vector on the basis of most frequent to occur. It automatically deduct the element in bucket that no element in it.
That's it. Hope it helps.

# Complexity
- Time complexity:
$$O(n)$$ -->

- Space complexity:
$$O(n)$$ -->
# Things I learnt New
use of auto: i.e. It automatically finds out the type 
Bucket sort
