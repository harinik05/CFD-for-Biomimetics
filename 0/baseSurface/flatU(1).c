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
    class       volVectorField;
    location    "0";
    object      U;
}
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

dimensions      [0 1 -1 0 0 0 0];

internalField   uniform (1 0 0);

boundaryField
{
     top
    {
        type            fixedValue;
        value           uniform (1 0 0);
    }
    inlet
    {
        type            fixedValue;
        value           uniform (1 0 0);
    }
    outlet
    {
        type            fixedValue;
        value           uniform (1 0 0);
    }
    front
    {
        type            fixedValue;
        value           uniform (1 0 0);
    }
    back
    {
        type            fixedValue;
        value           uniform (1 0 0);
    }
    bottom
    {
        type            noSlip;
    }
    peak
    {
        type            noSlip;
    }
}


// ************************************************************************* //
