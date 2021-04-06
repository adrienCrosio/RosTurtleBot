
"use strict";

let PowerSystemEvent = require('./PowerSystemEvent.js');
let WheelDropEvent = require('./WheelDropEvent.js');
let KeyboardInput = require('./KeyboardInput.js');
let ScanAngle = require('./ScanAngle.js');
let CliffEvent = require('./CliffEvent.js');
let ExternalPower = require('./ExternalPower.js');
let VersionInfo = require('./VersionInfo.js');
let ButtonEvent = require('./ButtonEvent.js');
let DigitalOutput = require('./DigitalOutput.js');
let Sound = require('./Sound.js');
let DockInfraRed = require('./DockInfraRed.js');
let DigitalInputEvent = require('./DigitalInputEvent.js');
let SensorState = require('./SensorState.js');
let RobotStateEvent = require('./RobotStateEvent.js');
let ControllerInfo = require('./ControllerInfo.js');
let Led = require('./Led.js');
let MotorPower = require('./MotorPower.js');
let BumperEvent = require('./BumperEvent.js');
let AutoDockingGoal = require('./AutoDockingGoal.js');
let AutoDockingFeedback = require('./AutoDockingFeedback.js');
let AutoDockingActionResult = require('./AutoDockingActionResult.js');
let AutoDockingAction = require('./AutoDockingAction.js');
let AutoDockingActionFeedback = require('./AutoDockingActionFeedback.js');
let AutoDockingResult = require('./AutoDockingResult.js');
let AutoDockingActionGoal = require('./AutoDockingActionGoal.js');

module.exports = {
  PowerSystemEvent: PowerSystemEvent,
  WheelDropEvent: WheelDropEvent,
  KeyboardInput: KeyboardInput,
  ScanAngle: ScanAngle,
  CliffEvent: CliffEvent,
  ExternalPower: ExternalPower,
  VersionInfo: VersionInfo,
  ButtonEvent: ButtonEvent,
  DigitalOutput: DigitalOutput,
  Sound: Sound,
  DockInfraRed: DockInfraRed,
  DigitalInputEvent: DigitalInputEvent,
  SensorState: SensorState,
  RobotStateEvent: RobotStateEvent,
  ControllerInfo: ControllerInfo,
  Led: Led,
  MotorPower: MotorPower,
  BumperEvent: BumperEvent,
  AutoDockingGoal: AutoDockingGoal,
  AutoDockingFeedback: AutoDockingFeedback,
  AutoDockingActionResult: AutoDockingActionResult,
  AutoDockingAction: AutoDockingAction,
  AutoDockingActionFeedback: AutoDockingActionFeedback,
  AutoDockingResult: AutoDockingResult,
  AutoDockingActionGoal: AutoDockingActionGoal,
};
