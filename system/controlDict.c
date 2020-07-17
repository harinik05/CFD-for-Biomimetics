/*--------------------------------*- C++ -*----------------------------------*\
  =========                 |
  \\      /  F ield         | OpenFOAM: The Open Source CFD Toolbox
   \\    /   O peration     | Website:  https://openfoam.org
    \\  /    A nd           | Version:  6
     \\/     M anipulation  |
\*---------------------------------------------------------------------------*/
FoamFile
{
    version     2.0;
    format      ascii;
    class       dictionary;
    location    "system";
    object      controlDict;
}
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //


application       pimpleFoam;
startFrom         startTime;
startTime         0.0;
stopAt            endTime;
endTime           0.4; 
adjustTimeStep	  yes;
maxDeltaT		  1e-2;  
deltaT			  1; 
maxCo			  1;
writeControl      adjustableRunTime;
writeInterval     1e-1;
purgeWrite        0;
writeFormat       ascii;
writePrecision    16;
writeCompression  uncompressed;
timeFormat        general;
timePrecision     6;
runTimeModifiable yes;

functions
{
    forces
    {
        type forces;              // use the forces class
        //writeFields yes;
        //purgeWrite 0;
        writeControl writeTime;
        pName p;
        UName U;
        rhoName rhoInf;
        log true;
        //outputControl timeStep;
		//outputInterval 1; 
		log yes;
        libs ("libforces.so"); // "plugin" library to load
        patches ("peak.*"); // Name of patches to integrate forces
  // When to write the output
        rhoName rhoInf;           // Name of the reference density
        rhoInf 1.0;  
        rho rhoInf;             // Reference density for fluid
        CofR (0 0 0);       // Origin for moment calculations
    }
    forceCoeffs
    {
        type forceCoeffs;     // compute force-coefficients
        patches ("peak.*");
        writeControl writeTime;
        pName p;
        UName U;
        rhoName rhoInf;
        log true;
        libs ("libforces.so");
        rhoInf 1.0;
        rho rhoInf;
        CofR (0 0 0);
        liftDir (0 1 0);      // lift direction (parallel to U_inf)
        dragDir (1 0 0);      // drag direction (normal to U_inf)
        pitchAxis (0 0 1);    // rotational moment axis
        magUInf 0.001;            // magnitude of U_inf (for normalization)
        lRef 1.0;             // reference length
        Aref 1.0;             // reference area
    }
    
    vorticity1
    {
    	type vorticity;
    	writeControl writeTime;
    	libs ("libfieldFunctionObjects.so");
    	purgeWrite 0;
    }
    
    surfaceFieldValue
	{
		type surfaceFieldValue;
		libs ("libfieldFunctionObjects.so");
		log true;
		writeFields false;
		writeControl writeTime;
		regionType patch;
		surfaceFormat foam;	
		name peak;
		operation areaAverage;
		fields
		(
			p
			U
			vorticity
		);
	}
	


};
// ************************************************************************* //
