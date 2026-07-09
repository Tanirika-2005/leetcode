class Solution(object):
    def candy(self, ratings):
        """
        :type ratings: List[int]
        :rtype: int
        """
        list1 = []
        list1.insert(0, 0)
        for i in range(len(ratings)):
            list1.append(1)
        list1.append(0)
        ratings.append(0)
        ratings.insert(0, 0)
        
        for i in range(1, len(ratings) - 1):
            if ratings[i] > ratings[i-1]:
                list1[i] = list1[i-1] + 1

        for i in range(len(ratings) - 2, 0, -1):
            if ratings[i] > ratings[i+1]:
                list1[i] = max(list1[i], list1[i+1] + 1)
                
        return sum(list1)