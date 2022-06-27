
"use strict";

let ResetOmniWheels = require('./ResetOmniWheels.js')
let RelayBoardUnSetEMStop = require('./RelayBoardUnSetEMStop.js')
let UnlockPlatform = require('./UnlockPlatform.js')
let IOBoardSetDigOut = require('./IOBoardSetDigOut.js')
let RelayBoardSetEMStop = require('./RelayBoardSetEMStop.js')
let RelayBoardSetLCDMsg = require('./RelayBoardSetLCDMsg.js')
let LockPlatform = require('./LockPlatform.js')
let ActivateMotors = require('./ActivateMotors.js')
let RelayBoardSetRelay = require('./RelayBoardSetRelay.js')

module.exports = {
  ResetOmniWheels: ResetOmniWheels,
  RelayBoardUnSetEMStop: RelayBoardUnSetEMStop,
  UnlockPlatform: UnlockPlatform,
  IOBoardSetDigOut: IOBoardSetDigOut,
  RelayBoardSetEMStop: RelayBoardSetEMStop,
  RelayBoardSetLCDMsg: RelayBoardSetLCDMsg,
  LockPlatform: LockPlatform,
  ActivateMotors: ActivateMotors,
  RelayBoardSetRelay: RelayBoardSetRelay,
};
