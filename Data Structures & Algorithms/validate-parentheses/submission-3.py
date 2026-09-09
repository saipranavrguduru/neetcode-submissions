class Solution:
    def isValid(self, s: str) -> bool:
        brackets = []
        for char in s:
            if char == '(' or char == '{' or char == '[':
                brackets.append(char)
            elif char == '}':
                if not brackets or brackets.pop() != '{':
                    return False
            elif char == ')':
                if not brackets or brackets.pop() != '(':
                    return False
            elif char == ']':
                if not brackets or brackets.pop() != '[':
                    return False

        return len(brackets) == 0
