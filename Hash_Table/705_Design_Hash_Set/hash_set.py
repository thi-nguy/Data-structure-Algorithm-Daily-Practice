# Hash Set with chaining
class MyHashSet:
    def __init__(self):
        self.size = 1021
        self.s = [None] * self.size

    def hash(self, key: int) -> int:
        return (key % self.size)

    def add(self, key: int) -> None:
        index = self.hash(key)
        if self.s[index] == None:
            self.s[index] = [key]
        else:
            self.s[index].append(key)
    
    def remove(self, key: int) -> None:
        index = self.hash(key)
        if self.s[index] != None:
            while key in self.s[index]:
                self.s[index].remove(key)
    
    def contains(self, key: int) -> bool:
        index = self.hash(key)
        if self.s[index] != None:
            if key in self.s[index]:
                return True
        return False

obj = MyHashSet()
obj.add(12)
obj.add(145)
obj.add(14)
obj.remove(12)
param = obj.contains(145)
print(param)

