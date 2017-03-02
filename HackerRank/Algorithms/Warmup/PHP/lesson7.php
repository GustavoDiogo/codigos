<?php
    
function staircase($n){
    for($j=0;$j<$n;$j++){
        for($i=1;$i<=$n;$i++){
            printf($j<$n-$i?" ":"#");
        }
        printf("\n");
    }    
}    

$handle = fopen ("php://stdin","r");
fscanf($handle,"%d",$n);

staircase($n);

?>
