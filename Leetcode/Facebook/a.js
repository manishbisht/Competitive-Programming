Welcome to Facebook!

    This is just a simple shared plaintext pad, with no execution capabilities.

    When you know what language you would like to use for your interview,
    simply choose it from the dropdown in the top bar.

    Enjoy your interview!



// Get sum of all elements in binary search tree which are in range [low, high] inclusive.
//              6
//            /   \
//           4     8
//          / \   / \
//         3   5 7   9
//        /
//       2

// Input: [3, 10] => 42 = 6 + 4 + 3 + 5 + 8 + 7 + 9
// Input: [2, 5] => 14
// Input: [8, 9] => 17
// Input: [4, 6] => 15

    Node {
  val,
      left: undefined || Node
  right: undefined || Node
}


let sum = 0

const calculateSum = (root, low, high) => {
  sum = 0
  dfs(root, low, high)
  return sum
}

const dfs = (root, low, high) => {
  if (!root) {
    return
  }

  if (low <= root.val && root.val >= high) {
    sum += root.val
  }

  if (low <= root.val) {
    dfs(root.left, low, high)
  }

  if (root.val >= high) {
    dfs(root.right, low, high)
  }
}

solveProblem(root, 3, 10)
solveProblem(root, 2, 5)
solveProblem(root, 8, 9)
solveProblem(root, 4, 6)
solveProblem(root, 2, 9)

solveProblem(null, 3, 5)




//input:  A = [1, 4, 5, 2, 3, 7, 8, 6, 10, 9], k = 2
//output:     [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

// [2, 4, 5, 1], k=3
// [1, 2, 4, 5]


    [1, 4, 5, 2, 3, 7, 8, 6, 10, 9]
    [1, 4, 5, 2, 3, 7, 8, 6, 10, 9]

O(n)

find k size arary




























