<!-- +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ -->
<!-- +++++++++++++++++ JOURNAL ARTICLES ++++++++++++++++++++++++ -->
<!-- +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ -->




<span>
<b>Preprints</b>
</span>

<table border="0" cellpadding="2" cellspacing="15" width="700">
<colgroup>
    <col width="150">
    <col>
    <col>
  </colgroup>
<tbody>



<tr>
<td>
<div align="center">
<!--
<img src="img/morse_teaser.png" alt="contours" style="text-align: center; border: 0px solid;">
-->
</div></td>
<td><strong>Clear and Compress: Computing Persistent Homology in Chunks</strong><br>
Ulrich Bauer, Michael Kerber, Jan Reininghaus,
presented at TopoInVis 2013.
<br>
<small> 
<b>Abstract:</b> 
We present a parallelizable algorithm for computing the persistent homology of a filtered chain complex. Our approach differs from the commonly used reduction algorithm by first computing persistence pairs within local chunks, then simplifying the unpaired columns, and finally applying standard reduction on the simplified matrix. The approach generalizes a technique by G&uuml;nther et al., which uses discrete Morse Theory to compute persistence; we derive the same worst-case complexity bound in a more general context. The algorithm employs several practical optimization techniques which are of independent interest. Our sequential implementation of the algorithm is competitive with state-of-the-art methods, and we improve the performance through parallelized computation.
<br>
<a target="_blank" href="http://arxiv.org/abs/1303.0477">[arXiv]</a>

</small>
<br>
</td>
</tr>



</table>

<br><br>



<span>
<b>Publications</b>
</span>


<table border="0" cellpadding="2" cellspacing="15" width="700">
<colgroup>
    <col width="150">
    <col>
    <col>
  </colgroup>
<tbody>

<!-- new entry -->
<tr>
<td valign="middle" width="200">
<div align="center">
<img src="img/morse_teaser.png" alt="contours" style="text-align: center; border: 0px solid;">
</div>
</td>
<td><strong>Optimal topological simplification of discrete functions on surfaces</strong><br>
Ulrich Bauer, Carsten Lange, and Max Wardetzky. Discrete and Computational Geometry 47:2 (2012), 347&ndash;377.
<br>
<small> 
<b>Abstract:</b> 
Given a function f on a surface and a tolerance &delta; > 0, we construct a function f<sub>&delta;</sub> subject to &#8214;f<sub>&delta;</sub> - f&#8214;<sub>&infin;</sub> &le; &delta; such that f<sub>&delta;</sub> has a minimum number of critical points. Our construction relies on a connection between discrete Morse theory and persistent homology and completely removes homological noise with persistence &le; 2&delta; from the input function f. The number of critical points of the resulting simplified function f<sub>&delta;</sub> achieves the lower bound dictated by the stability theorem of persistent homology. We show that the simplified function can be computed in linear time after persistence pairs have been computed.

<!-- 
We present an efficient algorithm for computing a function that minimizes the number of critical points among all functions within a prescribed distance &delta; from a given input function. The result is achieved by establishing a connection between discrete Morse theory and persistent homology. Our method completely removes homological noise with persistence less than 2&delta;, constructively proving that the lower bound on the number of critical points given by the stability theorem of persistent homology is tight in dimension two for any input function.  
-->
<br>
<a target="_blank" href="http://www.springerlink.com/content/m23411wg02031415/fulltext.pdf">[pdf]</a>
<a target="_blank" href="http://dx.doi.org/10.1007/s00454-011-9350-z">[doi]</a>
</small>
<br>
</td>
</tr>


<!-- new entry -->
<tr>
<td valign="middle" width="200">
<div align="center">
<img src="img/thesis_teaser.png" alt="contours" style="text-align: center; border: 0px solid;">
</div>
</td>
<td><strong>Persistence in discrete Morse Theory</strong><br>
PhD thesis, University of G&ouml;ttingen, 2011.
<br>
<small>

<!--
We present an efficient algorithm for computing a function that minimizes the number of critical points among all functions within a p$
-->
<br>
<a target="_blank" href="http://webdoc.sub.gwdg.de/diss/2011/bauer_u/">[link]</a>
<a target="_blank" href="http://webdoc.sub.gwdg.de/diss/2011/bauer_u/bauer_u.pdf">[pdf]</a>
</small>
<br>
</td>
</tr>




<!-- new entry -->
<tr>
<td valign="middle" width="200">
<div align="center">
<img src="img/morse-tv.png" width="150" alt="Persistence" style="text-align: center; border: 1px solid;">
</div>
</td>
<td><strong>Total Variation Meets Topological Persistence: A First Encounter</strong><br>
Ulrich Bauer, Carola-Bibiane Schönlieb, and Max Wardetzky.
Proceedings of ICNAAM 2010, pp. 1022-1026.<br>
<small> 
<b>Abstract:</b> We present first insights into the relation between two popular yet apparently dissimilar approaches to denoising
of one dimensional signals, based on (i) total variation (TV) minimization and (ii) ideas from topological persistence. While a
close relation between (i) and (ii) might phenomenologically not be unexpected, our work appears to be the first to make this
connection precise for one dimensional signals. We provide a link between (i) and (ii) that builds on the equivalence between
TV-L2 regularization and taut strings and leads to a novel and efficient denoising algorithm that is contrast preserving and
operates in <em>O</em>(<em>n</em>log<em>n</em>) time, where <em>n</em> is the size of the input.
<br>
<a target="_blank" href="pub/tv_persistence.pdf">[pdf]</a>
</small>
<br>
</td>
</tr>



<!-- new entry -->
<tr>
<td>
<div align="center">
<img src="img/star_coarse.png" alt="curvature lines" style="text-align: center; border: 0px solid;">
</div></td>
<td><strong>Uniform Convergence of Discrete Curvatures from Nets of Curvature Lines</strong><br>
Ulrich Bauer, Konrad Polthier, Max Wardetzky, Discrete and Computational Geometry 43:4 (2010), 798&ndash;823.
<br>
<small> 
<b>Abstract:</b> We study &ldquo;Steiner-type&rdquo; discrete curvatures computed from 
nets of curvature lines on a given smooth surface, and prove their uniform pointwise convergence
to smooth principal curvatures. We provide explicit error bounds, with
constants depending only on the limit surface and the shape regularity of the
discrete net.
<br>
<a target="_blank" href="http://www.springerlink.com/content/84210067816n0m78/fulltext.pdf">[pdf]</a>
<a target="_blank" href="http://dx.doi.org/10.1007/s00454-009-9237-4">[doi]</a>

</small>
<br>
</td>
</tr>


<!-- new entry -->
<tr>
<td>
<div align="center">
<img src="img/tubescan-teaser.png" width="140" alt="tubes" style="text-align: center; border: 0px solid;" >
</div></td>
<td><strong>Generating Parametric Models of Tubes from Laser Scans</strong><br>
Ulrich Bauer, Konrad Polthier,
Computer-Aided Design 41 (2009), 719&ndash;729. 

<small> 
<br>
Conference version: Parametric Reconstruction of Bent Tube Surfaces,
Proceedings NASAGEM/Cyberworlds 2007, pp. 465&ndash;474. <a target="_blank" href="pub/bauer-ParametricReconstruction.pdf"><small>[pdf]</small></a> <a target="_blank" href="http://dx.doi.org/10.1109/CW.2007.59"><small>[doi]</small></a>
<br>

<b>Abstract:</b> We present a method for parametric reconstruction of a piecewise defined pipe surface, consisting of cylinder and torus segments, from an unorganized point set. Our main contributions are reconstruction of the spine curve of a pipe surface from surface samples, and approximation of the spine curve by <i>G&sup1;</i> continuous circular arcs and line segments. Our algorithm accurately outputs the parametric data required for bending machines to create the reconstructed tube.
<br>
<a target="_blank" href="pub/bauer-Tubes.pdf">[pdf]</a>
<a target="_blank" href="http://dx.doi.org/10.1016/j.cad.2009.01.002">[doi]</a>
</small>

<br>
</td>
</tr>



<!-- new entry -->
<tr>
<td>
<div align="center">
<img src="img/tallent_teaser_tiny.jpg" alt="plane detection" style="text-align: center; border: 0px solid;" >
</div></td>
<td><strong>Detection of Planar Regions in Volume Data for Topology Optimization</strong><br>
Ulrich Bauer, Konrad Polthier,
Proceedings of Geometry Modelling and Processing 2008, Lecture Notes in Computer Science vol. 4975 (2008), 119&ndash;126.<br>
<small> 
<b>Abstract:</b> We propose a method to identify planar regions in volume
data using a specialized version of the discrete Radon transform operating
on a structured or unstructured grid. The algorithm uses an efficient
discretization scheme for the parameter space to obtain a running time
of <i>O</i>(<i>N</i>(<i>T</i> log <i>T</i>)), where <i>T</i> is the number of cells and <i>N</i> is the number
of plane normals in the discretized parameter space.
We apply our algorithm in an industrial setting and perform experiments
with real-world data generated by topology optimization algorithms,
where the planar regions represent portions of a mechanical part
that can be built using steel plate.
<br>
<a target="_blank" href="pub/bauer-PlanarRegions.pdf">[pdf]</a>
<a target="_blank" href="http://dx.doi.org/10.1007/978-3-540-79246-8_9">[doi]</a>
</small>
<br>
</td>
</tr>



<!-- new entry -->
<!--
<tr>
<td>
<div align="center">
<img src="img/tubescan-teaser-tiny.jpg"  alt="tubes" style="text-align: center; border: 0px solid;" >
</div></td>
<td><strong>Parametric Reconstruction of Bent Tube Surfaces</strong><br>
Ulrich Bauer, Konrad Polthier,
Proceedings of the 2007 International Conference on Cyberworlds, pp. 465-474.<br>
<small> 
<b>Abstract:</b> We present a method for parametric reconstruction of a piecewise defined pipe surface, consisting of cylinder and torus segments, from an unorganized point set. Our main contributions are reconstruction of the spine curve of a pipe surface from surface samples, and approximation of the spine curve by G1 continuous circular arcs and line segments. Our algorithm accurately outputs the parametric data required for bending machines to create the reconstructed tube.
<br>
<a target="_blank" href="pub/bauer-ParametricReconstruction.pdf">[pdf]</a>
</small>
<br>
</td>
</tr>
-->

</tbody>
</table>


<!-- +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ -->
<!-- +++++++++++++++++++++++++++ THESES ++++++++++++++++++++++++ -->
<!-- +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ -->

<br><br>
<span>
<b>Undergraduate projects</b>
</span>
<br><br>
<table border="0" cellpadding="2" cellspacing="15" width="700">
<tbody>

<!-- new entry -->
<tr>
<td>
<div align="center">
<img src="img/assignment_tiny.png" alt="assignment" style="text-align: center; border: 0px solid;" >
</div></td>
<td><strong>Assignment Problem with Constraints</strong><br>
Diploma Thesis &ndash; ETH Z&uuml;rich (10/2004  &ndash; 03/2005)<br>
<small> 
<b>Abstract:</b> Combinatorial optimisation plays an important role in logistics, and many of the basic problems and algorithms find a direct application in this area or even originate from it. For instance, the assignment problem asks for a cost-optimal assignment of workers to tasks or products to warehouse locations.
<br>
Additional constraints on the solutions, such as an equal distribution of products to warehouses, are however often required in real-world settings. An algorithm to solve this problem is developed based on Bertsekas' well-known auction algorithm.
<br>
Advisors: Andreas Weissl and Prof. Angelika Steger, ETH Zürich
<br>
<a target="_blank" href="pub/ConstrainedAssignment.pdf">[pdf]</a>
</small>
<br>
</td>
</tr>

<!-- new entry -->
<tr>
<td>
<div align="center">
<img src="img/cdk-logo.png" alt="cdk" style="text-align: center; border: 0px solid;" >
</div></td>
<td><strong>Minimum Cycle Bases Algorithms for the Chemistry Development Kit</strong><br>
<p>Interdisciplinary project &ndash; TU M&uuml;nchen (04/2004 &ndash; 09/2004)</p> 
<small> 
The cycles of a graph (the subgraphs whose vertices have even degree) span a matroid; addition on this matroid is defined as the symmetric difference of the edges. A cycle basis is a maximal set of linearly independent cycles; a minimum cycle basis is a cycle basis with minimum edge count (or minimum total edge weight in the case of weighted graphs).      
<br>
The Smallest Set of Smallest Rings (SSSR), the chemical equivalent
to a minimum cycle basis, plays an important role in computational
chemistry. However, an efficient and exact algorithm for computing an
SSSR was missing from the <a href="http://cdk.sourceforge.net/"><small>Chemistry Development Toolkit (CDK)</small></a>, a comprehensive
library for computational chemistry which is used in several
projects such as <a href="http://jmol.sourceforge.net/"><small>JMol</small></a> and <a href="http://jchempaint.sourceforge.net/"><small>JChemPaint</small></a>.      
<br>
We present details about the implementation of several algorithms
related to minimum cycles bases and provide several improvements to the algorithms that lower the computational complexity of the minimum cycle basis algorithm to O(<i>m</i>&sup3;).      
<br>
Advisors: Franziska Berger and Prof. Peter Gritzmann, TU M&uuml;nchen
</small>
<br>
<a target="_blank" href="pub/CDK-Ringsearch.pdf">[pdf]</a>
<br>
</td>
</tr>

<!-- new entry -->
<tr>
<td>
<div align="center">
<img src="img/hydra.png" alt="hydra" style="text-align: center; border: 0px solid;" >
</div></td>
<td><strong>Hydra: Collaborative Text Editor</strong><br>
<p>Application development &ndash; TU M&uuml;nchen (01/2003 &ndash; 06/2003)</p> 
<small> 
Hydra is an easy-to-use collaborative real-time text editor for Mac OS X. It uses operational transformations to synchronise text on the different participating computers and allows users to simultaneously edit a text file without locking.
<br>
Hydra has won several awards, among them the Apple Design Award and the O'Reilly Mac OS X Innovators Award. It is now a commercial product maintained by two of my co-authors under the name <a href="http://www.codingmonkeys.de/subethaedit/"><small>SubEthaEdit</small></a>.
<br>
<a href="http://en.wikipedia.org/wiki/Apple_Design_Awards#2003" class="notexternal"><img src="img/ada.png" border="0" alt="Apple Design Award"></a>
<a href="http://www.macdevcenter.com/pub/a/mac/developer/2003/07/10/innovators.html"><img src="img/iawinner2003_125x50.gif" border="0" alt="O'Reilly Mac OS X Innovators Award"></a>      
</small>
<br>
</td>
</tr>

</tbody>
</table>
