class Solution(object):
    def isPalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """
        d = s.lower()
        d1 = " "
        d = d.replace(" ","")
        for i in d:
            if i.isalpha() == False and i.isdigit() == False:
                d1 = d1 + ""
            else:
                d1 = d1 + i
        d1 = d1.lstrip()
        d1 = d1.rstrip() 
        if(d1 == d1[::-1]):
            return True 
        else :
            return False 
