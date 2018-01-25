class Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        t = []
        for x in s:
            if x == '(' or x == '{' or x == '[':
                t.append(x)
            elif x == ')' and len(t) > 0 and t[-1] == '(':
                c = t.pop()
            elif x == ']' and len(t) > 0 and t[-1] == '[':
                c = t.pop()
            elif x == '}' and len(t) > 0 and t[-1] == '{':
                c = t.pop()
            else:
                return False
        if len(t) > 0:
            return False
        return True
