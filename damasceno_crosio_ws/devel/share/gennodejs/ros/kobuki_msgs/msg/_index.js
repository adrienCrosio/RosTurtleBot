
"use strict";

let ButtonEvent = require('./ButtonEvent.js');
let ScanAngle = require('./ScanAngle.js');
let CliffEvent = require('./CliffEvent.js');
let BumperEvent = require('./BumperEvent.js');
let ExternalPower = require('./ExternalPower.js');
let SensorState = require('./SensorState.js');
let DockInfraRed = require('./DockInfraRed.js');
let MotorPower = require('./MotorPower.js');
let DigitalInputEvent = require('./DigitalInputEvent.js');
let DigitalOutput = require('./DigitalOutput.js');
let Sound = require('./Sound.js');
let WheelDropEvent = require('./WheelDropEvent.js');
let ControllerInfo = require('./ControllerInfo.js');
let RobotStateEvent = require('./RobotStateEvent.js');
let KeyboardInput = require('./KeyboardInput.js');
let PowerSystemEvent = require('./PowerSystemEvent.js');
let VersionInfo = require('./VersionInfo.js');
let Led = require('./Led.js');
let AutoDockingActionGoal = require('./AutoDockingActionGoal.js');
let AutoDockingAction = require('./AutoDockingAction.js');
let AutoDockingActionResult = require('./AutoDockingActionResult.js');
let AutoDockingFeedback = require('./AutoDockingFeedback.js');
let AutoDockingActionFeedback = require('./AutoDockingActionFeedback.js');
let AutoDockingResult = require('./AutoDockingResult.js');
let AutoDockingGoal = require('./AutoDockingGoal.js');

module.exports = {
  ButtonEvent: ButtonEvent,
  ScanAngle: ScanAngle,
  CliffEvent: CliffEvent,
  BumperEvent: BumperEvent,
  ExternalPower: ExternalPower,
  SensorState: SensorState,
  DockInfraRed: DockInfraRed,
  MotorPower: MotorPower,
  DigitalInputEvent: DigitalInputEvent,
  DigitalOutput: DigitalOutput,
  Sound: Sound,
  WheelDropEvent: WheelDropEvent,
  ControllerInfo: ControllerInfo,
  RobotStateEvent: RobotStateEvent,
  KeyboardInput: KeyboardInput,
  PowerSystemEvent: PowerSystemEvent,
  VersionInfo: VersionInfo,
  Led: Led,
  AutoDockingActionGoal: AutoDockingActionGoal,
  AutoDockingAction: AutoDockingAction,
  AutoDockingActionResult: AutoDockingActionResult,
  AutoDockingFeedback: AutoDockingFeedback,
  AutoDockingActionFeedback: AutoDockingActionFeedback,
  AutoDockingResult: AutoDockingResult,
  AutoDockingGoal: AutoDockingGoal,
};
