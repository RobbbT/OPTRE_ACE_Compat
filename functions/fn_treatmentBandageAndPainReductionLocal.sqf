/*
 * Author: AACO
 * Handles the pain after treating a patient.
 *
 * Arguments:
 * 0: The patient <OBJECT>
 * 1: The treatment classname <STRING>
 *
 * Return Value:
 * None
 *
 * Public: No
 */

#define BIOFOAM_PAIN_REDUCTION 0.4
#define MEDIGEL_PAIN_REDUCTION 0.1

params ["_target", "_className"];

private _painReduction = if (_className == "biofoam") then {
    BIOFOAM_PAIN_REDUCTION
} else {
    MEDIGEL_PAIN_REDUCTION
};

private _pain = ((_target getVariable ["ace_medical_pain", 0]) - _painReduction) max 0;
_target setVariable ["ace_medical_pain", _pain, true];
