def main():
  print("Enter two lists of numbers:")
  list1 = list(map(int, input().split()))
  list2 = list(map(int, input().split()))
  print("List 1: ", list1)
  print("List 2: ", list2)

  # comparator method
  def cmp(a,b):
    if a > b:
      return 1
    elif b > a:
      return -1
    else:
      return 0

  cmp_list1, cmp_list2 = [ ], [ ]
  for i, v in enumerate(list1) :
  cmp_list1.append(cmp(i, v))
  for i, v in enumerate(list2) :
    cmp_list2.append(cmp(i, v))

print("List 1 index comp value: ", cmp_list1)
print("List 2 index comp value: ", cmp_list2)

print("List 1 sorted: ", sorted(list1))
print("List 2 sorted: ", sorted(list2))

#calculate intersection
counts = {}
#prepare frequency of each number 
for i in list2:
  if i not in counts:
    count[i] = 1
  else:
    counts[i] += 1
intersection = []
for num in list1:
  if num in counts and counts[num] > 0:
    counts[num] -= 1

print("Intersection: ", intersection)
print("Union: ", list1 + list2)

#caluclate difference
diff = []
for i1 in list1:
  if i1 not in list2:
    diff.append(i1)
for i2 in list2:
  if i2 not in list1:  
    diff.append(i2)
print("Difference: ", diff)
