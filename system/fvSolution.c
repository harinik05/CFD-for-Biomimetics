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
    object      fvSolution;
}
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

solvers
{
    p
    {
        solver          GAMG;
        preconditioner	GAMG;
        smoother		DICGaussSeidel;
        tolerance       1e-07;
        relTol          0.0;
    }

    pFinal
    {
        $p;
        tolerance 		1e-08;
        relTol          0;
    }

    "(U|k|epsilon|omega|R|nuTilda)"
    {
        solver          PBiCGStab;
        preconditioner  DILU;
        smoother        DICGaussSeidel;
        tolerance       1e-07;
        relTol          0;
    }
}

PIMPLE
{
	momentumPredictor off;
	nOuterCorrectors	1;
	nCorrectors			1;
	nNonOrthogonalCorrectors	0;
	pRefCell	0;
	pRefValue	0;
	turbOnFinalIterOnly	no;
	
	residualControl
	{
		"(U|p|k|omega)"
		{
			tolerance 1e-7;
			relTol 0;
		}
	}
}


relaxationFactors
{
		U 0.85;
		k 0.8;
		omega 0.8;
		nut 0.8;
		R 0.8;
		nuTilda 0.8;
		p 0.85;
}

// ************************************************************************* //
