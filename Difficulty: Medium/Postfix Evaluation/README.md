<h2><a href="https://www.geeksforgeeks.org/problems/evaluation-of-postfix-expression1735/1">Postfix Evaluation</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 14pt;">You are given an array of strings <strong>arr</strong> that represents a valid arithmetic expression written in <strong>Reverse Polish Notation (Postfix Notation)</strong>. Your task is to evaluate the expression and return an integer representing its value.</span></p>
<p><span style="font-size: 14pt;"><strong>Key Details</strong>:</span></p>
<ol>
<li><span style="font-size: 14pt;">The valid operators are <strong>'+'</strong>, <strong>'-'</strong>, <strong>'*'</strong>, and <strong>'/'</strong>.</span></li>
<li><span style="font-size: 14pt;">Each operand is guaranteed to be a valid integer or another expression.</span></li>
<li><span style="font-size: 14pt;">The division operation between two integers always rounds the result towards zero, discarding any fractional part.</span></li>
<li><span style="font-size: 14pt;">No division by zero will occur in the input.</span></li>
<li><span style="font-size: 14pt;">The input is a valid arithmetic expression in Reverse Polish Notation.</span></li>
<li><span style="font-size: 14pt;">The result of the expression and all intermediate calculations will fit in a 32-bit signed integer.</span></li>
</ol>
<p><span style="font-size: 14pt;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>arr = ["2", "3", "1", "*", "+", "9", "-"]</span><br><span style="font-size: 14pt;"><strong>Output:</strong> -4</span><br><span style="font-size: 14pt;"><strong>Explanation:</strong> If the expression is converted into an infix expression, it will be 2 + (3 * 1) – 9 = 5 – 9 = -4.</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input:</strong> arr = ["100", "200", "+", "2", "/", "5", "*", "7", "+"]</span><br><span style="font-size: 14pt;"><strong>Output:</strong> 757</span><br><span style="font-size: 14pt;"><strong>Explanation:</strong> If the expression is converted into an infix expression, it will be ((100 + 200) / 2) * 5 + 7  = 150 * 5 + 7 = 757.</span></pre>
<p><span style="font-size: 14pt;"><strong>Constraints:</strong></span></p>
<ul>
<li><span style="font-size: 14pt;">1 &lt;= arr.size() &lt;= 10<sup>5</sup></span></li>
<li><span style="font-size: 14pt;">arr[i] is either an operator: "+", "-", "*", or "/", or an integer in the range [-10<sup>4</sup>, 10<sup>4</sup>]</span></li>
</ul></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Stack</code>&nbsp;<code>Data Structures</code>&nbsp;