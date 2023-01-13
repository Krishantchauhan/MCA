<?php
   $numb=$_GET['num1'];
   $x = $numb;
   while ($x % 3 == 0) {
   $x /= 3;
}
if($x == 1) {
 echo "$numb is power of 3";
 }
 else
 {
echo "$numb is not power of 3"; }
?>
