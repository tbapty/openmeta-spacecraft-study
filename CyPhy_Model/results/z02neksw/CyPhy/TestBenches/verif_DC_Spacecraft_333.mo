within CyPhy.TestBenches;
model verif_DC_Spacecraft_333
  extends CyPhy.TestBenches.DC_Spacecraft_333;

    // Requirement Definition
    type Requirement = enumeration(
      success,
      unknown,
      violated);

    // Limit-Checks definitions

    // Requirements-Checks
equation
    // Limit-Checks equations

    // Requirement-Metrics Checks equations
end verif_DC_Spacecraft_333;
