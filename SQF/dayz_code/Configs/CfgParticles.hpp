//need to remove the spray, submarine is not a speedboat, 
//so create an empty particle effect
class CfgCloudlets
{
    class Default;
    class subpart: Default
    {
        interval = 0;
        sizeCoef = 0;
        colorCoef[] = {1,1,1,1};
        animationName = "";
        animationSpeedCoef = 0;
        lifetime = 0;
        position[] = {0,0,0};
    };
};

//need to remove the spray, submarine is not a speedboat
class subspray
{
    class subspray
    {
        simulation = "particles";
        type = "subpart";
    };
};