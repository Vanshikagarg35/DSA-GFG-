<h2><a href="https://www.geeksforgeeks.org/problems/check-tree-traversal--141628/1">Check Tree Traversal</a></h2><h3>Difficulty Level : Difficulty: Hard</h3><hr><div class="problems_problem_content__Xm_eO" style="--text-color: var(--problem-text-color);"><p><span style="font-size: 18px;">Given three arrays <strong>preorder[]</strong>, <strong>inorder[]</strong>, and <strong>postorder[]</strong> representing the preorder, inorder, and postorder traversals of a <strong>binary tree</strong> with unique node values, determine whether all three traversals correspond to the same binary tree.</span></p>
<p><span style="font-size: 18px;">Return <strong>true</strong> if it is possible to construct a binary tree whose traversals match all three given arrays; otherwise, return <strong>false</strong>.</span></p>
<p><strong><span style="font-size: 18px;">Examples:</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>preorder[] = [1, 2, 4, 5, 3], inorder[] = [4, 2, 5, 1, 3], postorder[] = [4, 5, 2, 3, 1]
<strong>Output:</strong> true
<strong>Explanation: </strong>All three traversals represent the same binary tree:<br><img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/928681/Web/Other/blobid0_1782131029.png" width="208" height="195"> &nbsp; &nbsp;<br></span><span style="font-size: 14pt;">Preorder  : 1 2 4 5 3
Inorder    : 4 2 5 1 3
Postorder : 4 5 2 3 1
</span></pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>preorder[] = [1, 5, 4, 2, 3], inorder[] = [4, 2, 5, 1, 3], postorder[] = [4, 1, 2, 3, 5]
<strong>Output:</strong> false
<strong>Explanation: </strong></span><span style="font-size: 14pt;">There does not exist any binary tree whose preorder, inorder, and postorder traversals match all the given arrays simultaneously.</span></pre>
<p><span style="font-size: 18px;"><strong>Constraints:<br></strong></span><span style="font-size: 18px;">1 ≤ Number of Nodes ≤ 10<sup>3</sup></span><span style="font-size: 18px;"><br></span><span style="font-size: 18px;">All node values are unique.</span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Recursion</code>&nbsp;<code>Tree</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;