<div id="header_fak">
	<div id="Logo_left" ><a href="http://www.uni-goettingen.de/en/1.html" id="startlink"></a>
	</div>
	<div id="Logo_right" ><a href="<? print("$dir");?>/" id="DDG_logo"></a>
	</div>
  	<div id="header_name" ><a href="<? print("$dir");?>/" 
		title="Discrete Differential Geometry Lab">Discrete Differential Geometry Lab</a> 
	</div>
	<br>	
  	<ul id="navigation" >
    	<li><a href="<? print("$dir");?>/">About</a></li>
    	<li><a href="<? print("$dir");?>/people.php">People</a></li>
		<li><a href="<? print("$dir");?>/publications.php">Publications</a></li>
    	<li><a href="<? print("$dir");?>/teaching.php">Teaching</a></li>
  	</ul>
</div>

<div id="zeile"> <!-- style="background-color: rgb(193, 99, 62);" -->
	<div id="zeilelinks"> <!-- style="background-color: rgb(168, 74, 37);" --> <font class="seite">Current page:</font></div>
	<div id="zeilerechts"> <!-- style="background-color: rgb(193, 99, 62);" -->
		<div style="display: block;" id="sizer">	
	  		<div style="white-space: nowrap;">	
				<a class="increase" href="#" title="larger font">
				<img src="<? print("$dir");?>/img/plus.gif" id="plus_icon" 
				style="vertical-align: top; margin-top: 1px;" alt="larger font" border="0"></a>
    			<a class="decrease" href="#" title="smaller font">
				<img src="<? print("$dir");?>/img/minus.gif" id="minus_icon" 
				style="vertical-align: top; margin-top: 1px;" alt="smaller font" border="0"></a>
	 		</div>
		</div>
	</div>
	<div id="zeilemitte"> <!-- style="background-color: rgb(193, 99, 62);" -->
		<ul id="pfad">
			<li><a href="http://www.uni-goettingen.de/en/85746.html" 
				title="Institute of numerical and applied mathematics">NAM</a></li>
			<li><a href="<? print("$dir");?>/" title="DDG-Group">DDG</a></li>
			<?php
			if ($nav == "people")
			{
				print "<li><a href=\"$dir/people.php\" title=\"People\">People</a></li>";
			}
			if ($nav == "teaching")
			{
				print "<li><a href=\"$dir/teaching.php\" title=\"Teaching\">Teaching</a></li>";
			}
			if ($nav == "Max")
			{
				print "<li><a href=\"$dir/people.php\" title=\"People\">People</a></li>";
				print "<li><a href=\"http://www.num.math.uni-goettingen.de/~wardetzky/\" 
				title=\"Max Wardetzky\">Max Wardetzky</a></li>";
			}
            if ($nav == "Ulli")
            {
                 print "<li><a href=\"$dir/people.php\" title=\"People\">People</a></li>";
                 print "<li><a href=\"http://www.num.math.uni-goettingen.de/~bauer/\"
                 title=\"Ulrich Bauer\">Ulrich Bauer</a></li>";
            }
			elseif ($nav == "publications")
			{
				 print "<li><a href=\"$dir/publications.php\" title=\"Publications\">Publications</a></li>";
			}
			?>
		</ul>
	</div>
</div>
<div id="top"></div>
