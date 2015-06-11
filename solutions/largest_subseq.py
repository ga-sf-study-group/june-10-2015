arr = [1,2,3,-5, -8, -10, 10, 20, 30]
old_start, old_end, old_sum, new_start, new_end, new_sum = 0, 0, 0, 0, 0, 0
for i in range(len(arr)):
  tmp_sum = arr[i]
  for j in range(i+1, len(arr)):
    if tmp_sum + arr[j] < tmp_sum:
      print 'discarded sum: ', arr[i:j+1], tmp_sum + arr[j]
      break
    else:
      tmp_sum = tmp_sum + arr[j]
    if tmp_sum > new_sum:
      old_start, old_end, old_sum = new_start, new_end, new_sum
      new_start = i
      new_end = j
      new_sum = tmp_sum
      print arr[i : j+1], new_sum
print new_sum
