class Solution:
    def capitalizeTitle(self, title: str) -> str:
        def f(x):
            if len(x) <= 2:
                return x.lower()
            return x.capitalize()
        return " ".join(f(x) for x in title.split())
