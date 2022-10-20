 public int numIdenticalPairs(int[] nums) {

    int[] count = new int[102];

    for (int num : nums) {
      count[num]++;
    }

    int totalCount = 0;

    for (int i : count) {
      totalCount += ((i) * (i-1))/2;
    }

    return totalCount;
  }
