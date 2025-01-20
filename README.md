# OBUSPA for OpenWRT Devices

This project is a fork from [BBF OB-USP-AGENT (Obuspa)](https://github.com/BroadbandForum/obuspa). Aditional code is being developed to make it compatible with OpenWRT devices.

## OB-USP-AGENT

Open Broadband-User Services Platform-Agent (OB-USP-Agent) is an open source project that is focused on creating a reference implementation of the User Services Platform (USP) [specification](https://usp.technology) from an "Agent" perspective. USP is a remote management and control protocol where management entities are separated between the Agent and the Controller.  A USP Agent is responsible for exposing a set of "Service Elements" (essentially, a data model composed of objects and parameters that represent a specific set of functionality) for consumption by a Controller.  While USP is capable of being used in many different environments, the home network is expected to be the most common environment, and in this environment a USP Agent would reside in a piece of Customer Premise Equipment (CPE), e.g. broadband home router, Wi-Fi access point, IoT gateway.