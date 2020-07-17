# CFD-For-Biomimetics
ABSTRACT--
Drag is a true annoyance for many industrial sectors around the world. Drag force is produced by the friction of a flowing fluid flowing on the surface that lowers the energy efficiency of the system. This experiment attempts to minimize the drag force by testing theoretical biomimetic coatings. This approach was proven efficient using the digital method known as Computational Fluid Dynamics (CFD) for solving this fluid-flow problem. The morphological structures of different organisms were modeled using software tools such as Salome, OpenFOAM, and ParaView for further comparison.


INTRODUCTION--
Drag is an invisible resistive force that challenges the performance of various industrial sectors. In the scientific world, drag measures the system's energy efficiency in reference to the surface topography and the rate of the flowing fluid. Flat surfaces are observed to cause flow instabilities, thereby increasing the friction (drag). This experimentation is an attempt to adopt nature's microscopic deformities as a surface coating to reduce drag. The morphological structures of biological organisms (Tetrodontophora Bielanensis, Rosaceae, and Morpho Peleides) were modeled using software tools such as Salome, OpenFOAM, and ParaView. Computational Fluid Dynamics (CFD) was a digital method that was applied to solve this fluid-flow problem. Results indicated that streamlined surfaces are better at vortex shedding compared to planar surfaces. Vortex shedding avoids producing flow instabilities by creating a lower pressure region for more energy. By varying the velocity of the upcoming fluid and patterns of the morphological structures, the drag force reduced significantly (NASA Glenn Research Center, 2015). Comparatively, researchers have altered the geometric models in macroscopic applications such as automobiles, planes, and swimsuits. By modifying the surface topography on a microscopic scale, drag reduction will prevent the adhesion of fluid-like particles on the surface. This biomimetic approach is environmentally-friendly, efficient, biodegradable, and copiously available.


HYPOTHESIS--
If a fluid flows over a surface which exhibits a lot of vortex shedding, the drag will be reduced, as compared to a planar surface.


METHODOLOGY--
The software tools like Salome, OpenFOAM and Paraview were used to analyze the identified specimen. For the purpose of experimentation, CFD’s fluid-flow package was utilized to generate external factors that influence drag, while the pressure was kept constant (incompressible) and numerical solutions are driven through the Finite Volume Method (Wolfram MathWorld, 2001). This method will discretize the mesh to solve the fluid-flow equations. The governing equations of incompressible fluids are Navier-Stokes Equations in which the conservation of mass states that the mass increase is equal to the total inflow of mass (Tryggvason,G., 2011).


STAGE 1-PRE-PROCESSING--
The geometries of identified morphological structures were constructed in Salome. The cross-sections of morphological structures were traced on a coordinate plane and the points were copied to Salome to create a two-dimensional outline. A revolution around 360 degrees was applied for curved models such as Rosaceae and Tetrodontophora Bielanensis. The outline was extruded along the z-axis to create deep tunnels for the Morpho Peleides model. A bounding box was installed around the geometry to locate the simulation (Pluralsight, 2014). The mesh used was tetrahedrons generated using Netgen 1D-2D-3D algorithm.


STAGE 2: SOLVER--
In OpenFOAM, the physical properties of the fluid were set as viscous, incompressible, laminar, Newtonian , using water as the test liquid for all of the models. The calculations were scaled down to micrometers. The fluid flowed in a horizontal (+x) direction from inlet to outlet. The drag reduction was monitored by varying the freestream velocity between 0.001 to 1 m/s and designs of geometric bodies. The boundary conditions were defined in all regions of the solid to connect the geometric model with the environment. The velocity and pressure values were kept constant at multiple solid faces (SimScale, 2020). No slip and zero gradient conditions were applied at the walls which include the peak and bottom. After setting up the files, the simulation was executed in which iterations through timesteps generated solutions. The final solution is when the velocity profile stops changing for this steady-state fluid-flow.


STAGE 3: POST-PROCESSING--
In ParaView, the results for pressure, velocity, and vorticity were viewed in a cross-sectional perspective that is perpendicular to the direction of fluid-flow. This tool enabled the usage of stream-tracers to present the velocity field aesthetically. The post-processing file contained the data for drag coefficients.

RESULTS--
Refer to https://makeprojects.com/ysc/project/computational-fluid-dynamics-for-biomimetics-springtails-are-not-a-drag for the results and more information

CONCLUSION--
The initial hypothesis that surfaces that exhibit a lot of vortex shedding will reduce drag significantly compared to a linear surface was supported by this experimentation. According to the results, the morphological structure of Tetrodontophora Bielanesis is the most efficient in reducing drag. The drag force was reduced by 83% in comparison to the flat surface for a freestream velocity of 1 m/s. It was observed that parabolic structures such as Rosaceae and Tetrodontophora Bielanesis tend to be better at drag reduction compared to sharp, rectangular structures like flat surface and Morpho Peleides by minimizing the opposing pressure acting on the geometric structure. A low Reynolds Number was maintained for a predictive analysis and laminar flow.


DISCUSSION--
Drag reduction using the biomimetic approach has significantly been more effective compared to using a flat surface on a microscopic scale. This approach can be used for hydrophobic surfaces that repel the flow of water. More viscosity ranges could be incorporated for omniphobic surfaces. These findings could be applied in a wide range of applications in the future such as self-cleaning surfaces for solar panels for a higher energy efficiency. The spread of COVID-19 could be mitigated by reducing drag in common surfaces that attract fluid-like particles with viruses .


