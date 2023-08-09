<a name="graph"></a>

<h1 align="center">graphQLOL</h1>

<h4 align="center"><ins><strong><em>* a library for sending GraphQL queries and handling responses &mdash; packaged as a easy-to-use gui * </em></strong></ins></h4>

**<ins>TO-DO</ins>:**
- [ ] To doooo

<p align="center">
  <a href="https://www.linkedin.com/in/lyndsey791/">LinkedIn</a>  |  <a href="https://www.sorry-this-site-doesnt-exist-yet./">Website</a>  |     <a href="https://github.com/lyndskg/">GitHub</a>  |  <a href="#contact">Contact Info</a>
</p>

### <ins>Table of Contents</ins>
-
  <details>
    <summary><strong><em>I: Overview & Features</em></strong></summary>
    <ol>
      <li>
        <a href="#view">Project Overview</a>
        <ul>
          <li><a href="#obj">Objectives</a></li>
          <li><a href="#curr">Current Notes and Issues</a></li>
        </ul>
      </li>
      <li><a href="#feat">Key Features</a></li>
      <li><a href="#stackz">Currently Used Tech Stacks</a></li>
      <li><a href="devenv">Development Environment</a></li>
      <li><a href="#uiux">UI/UX Implementation Details</a></li>
      <li><a href="io">Potential I/O Specifications</a>
      <li><a href="#err">Error Handling</a></li>
      <li><a href="#plus">Future Enhancements</a></li>
      <li><a href="bye">Conclusion</a></li>
    </ol>
  </details>
-
  <details>
    <summary><strong><em>II: Implementation Details</em></strong></summary>
    <ol>
      <li>
        <a href="#view">Project Overview</a>
        <ul>
          <li><a href="#obj">Objectives</a></li>
          <li><a href="#curr">Current Notes and Issues</a></li>
        </ul>
      </li>
      <li><a href="#tech">Technologies and Programming Languages</a></li>
      <li><a href="#stackz">Currently Used Tech Stacks</a></li>
      <li><a href="devenv">Development Environment</a></li>
      <li>
        <a href="#map">Roadmap</a>
        <ul>
          <li><a href="todo">To-Do List</a></li>
          <li><a href="est">Time Estimate</a></li>
        </ul> 
      </li>
      <li><a href="#uiux">UI/UX Implementation Details</a></li>
      <li><a href="#feat">Key Features</a></li>
      <li><a href="web">Web Application</a></li>
      <li><a href="#flow">Basic Workflow Guide</a></li>
      <li><a href="#impl">Project Implementation Guide</a></li>
      <li>
        <a href="io">Potential I/O Specifications</a>
        <ul>
          <li><a href="#i">Input</a></li>
          <li><a href="#o">Output</a></li>
          <li><a href="#err">Error Handling</a></li>
        </ul>
      </li>
      <li><a href="#plus">Future Enhancements</a></li>
    </ol>
  </details>
-
  <details>
    <summary><strong><em>III: Usage, Installation & Getting Started</em></strong></summary>
    <ol>
      <li>
        <a href="#view">Project Overview</a>
        <ul>
          <li><a href="#obj">Objectives</a></li>
        </ul>
      </li>
      <li><a href="#feat">Key Features</a></li>
      <li><a href="io">Potential I/O Specifications</a>
      <li><a href="#err">Error Handling</a></li>
      <li><a href="#install">Installation</a>
        <ul>
          <li><a href="#prereq">Prerequisites</a></li>
          <li><a href="guide">User Installation Guide</a></li>
        </ul>
      </li>
      <li><a href="usage">Usage</a></li>
      <li><a href="#sys">System Requirements</a></li>
      <li><a href="#user">User Requirements</a></li>
    </ol>
  </details>
-
  <details>
    <summary><strong><em>IV: Miscellaneous</em></strong></summary>
    <ol>
      <a href="#view">Project Overview</a>
      <li><a href="#tech">Technologies and Programming Languages</a></li>
      <li><a href="#stackz">Currently Used Tech Stacks</a></li>
      <li>
        <a href="misc">Miscellaneous</a>
          <ul>
            <li><a href="devenv">Development Environment</a></li>
            <li><a href="est">Time Estimate</a></li>
          </ul>
      </li>
      <li><a href="give">Contributions</a></li>
        <ul>
          <li><a href="coc">Code of Conduct</a></li>
          <li><a href="whattogive">What?</a></li>
          <li><a href="howtogive">How?</a></li>
          <li><a href="whygive">Why?</a></li>
        </ul>
      </li>><a href="bye">Conclusion</a></li>
      <li><a href="#contact">Contact</a></li>
      <li><a href="#ack">Acknowledgments</a></li>
    </ol>
  </details>



<details>
  <summary>File Hierarchy</summary>
</details>


<details>
  <summary>Current Tech Stacks &nbsp; [<a href="#stackz">view more details</a>]</p>
  </summary>
</details>


<details>
  <summary>Progress &nbsp; [<a href="#curr">view our progress, logs, and other documentation</a>]</summary>
    <p><strong><ins>Note</ins>:</strong><em> Last updated</em>: 8/9/23</p>
     <ol>
       <li><a href="080923">8/9/23</a></li>
     </ol>
  </summary>
</details>


---------------------------

<a name="view"></a>
## Project Overview 

`graphQLOL` is a robust, versatile, and comprehensive `C++` library that enables sending GraphQL requests and processing the responses.

It seamlessly integrates `GraphQL` capabilities into applications &mdash; with a specific focus on communication with the Investopedia trading game API. The project aims to enhance one's understanding of API integration, network communication, software architecture, and `GraphQL` concepts &mdash; all the while creating a valuable tool for algorithmic trading strategy development and financial analysis.

This project involves implementing the `GraphQL` protocol &mdash; including query construction, request execution, and response handling. 


It requires knowledge of `GraphQL` concepts and the ability to interface with `HTTP` or `WebSocket` protocols.


&nbsp;


---------------------

<a name="obj"></a>
### <ins>Objectives</ins>:

Design and implement a library that can send GraphQL queries, handle responses, and provide an easy-to-use interface for integrating GraphQL into your applications. 

Clearly document your design choices, system architecture, and important implementation details. 
Discuss the challenges faced, the strategies employed to overcome them, and the reasoning behind your design decisions. 
Showcase your ability to analyze and debug issues effectively.


1. **GraphQL Integration:** Develop a sophisticated C++ library capable of simplifying GraphQL integration, offering users a seamless way to construct queries, send requests, receive responses, and manage data from the Investopedia trading game API. The library should abstract the complexities of the GraphQL protocol, making it easy for developers to work with the API.
> The primary goal is to create a highly capable C++ library that streamlines GraphQL integration. This entails crafting a comprehensive suite of features, such as constructing complex queries, orchestrating requests, handling intricate responses, and simplifying data management. The library will abstract the intricate details of the GraphQL protocol, enabling developers to harness the potential of the Investopedia trading game API without grappling with its complexity.

2. **Comprehensive Documentation:** Provide in-depth documentation that outlines design choices, system architecture, implementation details, and best practices. Walk users through the process of using the library effectively, and showcase your problem-solving skills through debugging strategies and issue analysis.
> This project will be meticulously documented to elucidate design rationale, architectural choices, and implementation intricacies. The documentation will serve as an educational resource, detailing strategies employed to tackle challenges and debug issues effectively. Through this, you'll not only showcase the project's technical accomplishments but also demonstrate your analytical problem-solving skills.

3. **Learning and Skill Enhancement:** Throughout the project, you will deepen your understanding of API interaction, network communication, C++ programming, and GraphQL concepts. By addressing challenges and employing advanced techniques, you will showcase your expertise in software development.
> Over the course of this project, you will gain profound insights into API interaction, network communication, software architecture, and C++ programming. By addressing challenges, optimizing code, and incorporating advanced techniques, you will display your expertise in software development and system design.

&nbsp;

---------------------

<a name="curr"></a>
### <ins>Current Notes and/or Issues</ins>: 

> Write
>
> Stuff
> 
> Here

   
<p align="right">(<a href="#graph">back to top</a>)</p>

---------------------

<a name="tech"></a>
## Technologies and Programming Languages

<a name="stackz"></a>
### Currently Used Tech Stack(s): 

__1. <ins>Backend</ins>: (Data Processing and Business Logic)__
`C++` as the core programming language for library development.
- Utilize object-oriented programming principles for modular and extensible code.
- Incorporate `C++ Standard Library` features for foundational functionalities.

__2. <ins>APIs, Frameworks, and Libraries</ins>:__

1. libcurl: A versatile library for HTTP communication, vital for sending requests to the Investopedia trading game API.
2. WebSocket++: A C++ library for WebSocket communication, facilitating real-time data streaming and interactivity.
3. RapidJSON: A fast JSON parser and generator for C++, pivotal for parsing API responses.
4. Boost: Utilize Boost libraries for various utilities and enhancements.
5. Catch2: A C++ unit testing framework for robust testing.
   
__3. <ins>Web APIs and HTTP Communication</ins>:__

- Utilize libcurl to establish communication with the Investopedia API endpoints.
- Incorporate WebSocket++ to establish WebSocket connections for real-time data streaming and interactivity.
- Craft HTTP GET/POST requests with appropriate headers and parameters to interact with the API.
- Leverage libcurl's features for efficient data transmission and response handling.

**4. <ins>Error Handling and Logging</ins>:**
- Implement a comprehensive error-handling mechanism that covers various scenarios.
- Utilize exception handling in C++ to gracefully manage errors and provide informative error messages.
- Incorporate logging mechanisms to track crucial interactions, debugging information, and error occurrences.
      
**5. <ins>Testing, Mocking, and Quality Assurance</ins>:**
- Employ the Catch2 testing framework for unit testing and regression testing.
- Design unit tests to validate individual functions and components of the library.
- Consider implementing mocks or fakes for API responses and WebSocket data during testing to simulate different scenarios.
  
__6. <ins>Logging and Documentation</ins>:__
- Integrate a logging library (e.g., Boost.Log) to record library interactions, requests, responses, and WebSocket data.
- Document code comprehensively using inline comments to explain complex functions and processes.
- Create an extensive documentation guide, covering library installation, usage, troubleshooting, and contributing guidelines.
- Provide sample code snippets and practical examples to guide developers through different aspects of the library.


---------------------

<a name="map"></a>
## Roadmap


**Week 1-2: Research and In-Depth Planning**

- Immerse yourself in GraphQL principles, dissecting query structure and response formats.
- Gain a deep understanding of the Investopedia trading game API, exploring available endpoints and data structures.
- Define project scope, objectives, and success criteria.
- Craft a meticulous roadmap, delineating architectural considerations and design strategies.

**Week 3-4: Architectural Blueprint**

- Architect a modular and scalable library design, encompassing modules for query construction, request dispatch, response processing, and error handling.
- Define the class hierarchy and data models, aligning them with GraphQL paradigms.
- Select appropriate third-party libraries for HTTP communication and GraphQL parsing.

**Week 5-6: Core Functionality Implementation**

- Develop core mechanisms for sending GraphQL requests to the Investopedia API, emphasizing robustness and efficiency.
- Concentrate on programmatically generating complex and valid GraphQL queries.
- Establish an elegant error-handling framework to gracefully manage unforeseen scenarios.

**Week 7-8: Response Handling and User Interaction**

- Implement comprehensive mechanisms for parsing and processing diverse responses from the API.
- Construct an intuitive and user-centric interface that abstracts the intricacies of GraphQL operations.
- Enable developers to tailor queries to specific needs and seamlessly manage authentication tokens.

**Week 9-10: Comprehensive Documentation and Debugging Strategies**

- Produce thorough documentation covering both technical intricacies and practical usage of the library.
- Address common pitfalls, provide troubleshooting techniques, and offer practical debugging strategies.
- Augment the documentation with annotated code examples, illustrative diagrams, and real-world scenarios.

**Week 11-12: Rigorous Testing, Refinement, and Packaging**

- Subject the library to rigorous testing across various usage scenarios, ensuring robustness and performance.
- Incorporate feedback from testing phases to enhance code quality and optimize performance.
- Package the library for distribution, accompanied by well-structured installation instructions and usage guidelines.



&nbsp;


<p align="right">(<a href="#graph">back to top</a>)</p>

---------------------
<a name="todo"></a>
### <ins>*To-Do List</ins>:*


&nbsp;


<p align="right">(<a href="#graph">back to top</a>)</p>

---------------------

<a name="impl"></a>
## Project Implementation Guide

1. **<ins>Getting Started</ins>:**
> 1. Familiarize yourself with the GraphQL specification and the basics of making GraphQL requests. 
> 2. Understand the GraphQL protocol, including schema definition, query language, and response format.
> 3. Study existing GraphQL libraries and clients to gain insights into their design and implementation.
> 4. Implement the necessary components to handle GraphQL queries and responses in your C++ library.
> 5. Explore existing GraphQL libraries in C++ for inspiration. 
> 6. Design and implement a library that abstracts away the complexities of working with GraphQL.
2. **<ins>Optimization</ins>:**
> - Optimize the library for efficiency and speed when handling GraphQL requests and responses.
> - Implement techniques such as caching, query optimization, or parallel request processing.
> - Measure and document the performance improvements achieved.
3. **<ins>Documentation</ins>:**
> - Create a README file that explains the library's purpose, features, and usage. 
> - Document the library's API usage, supported features, and code examples to assist users.
> - Consider providing sample applications or tutorials that showcase the library's capabilities.
> - Provide code examples and document the library's API.
> - Consider writing technical documentation or blog posts to showcase your library and explain its benefits and usage.



1. **Getting Started:** Configure your development environment, encompassing the chosen IDE and requisite libraries.

2. **Library Blueprint:** Design classes and functions aligned with GraphQL principles and efficient API integration.

3. **HTTP Communication:** Employ libraries such as libcurl to establish robust communication channels with the Investopedia API.

4. **Query Construction:** Create flexible and expressive functions, empowering users to craft intricate GraphQL queries with ease.

5. **Response Processing:** Design adaptable parsing mechanisms to extract pertinent data from the API's complex responses.

6. **Error Management:** Engineer an elegant error-handling mechanism, offering meaningful feedback to developers.

7. **User-Friendly Interface:** Develop an ergonomic interface that empowers users to interact with the library sans GraphQL intricacies.

8. **Debugging Strategies:** Elaborate on potential challenges, providing systematic debugging strategies in your documentation.


&nbsp;

<p align="right">(<a href="#graph">back to top</a>)</p>

---------------------
<a name="io"></a>
## Potential I/O Specifications

<a name="i"></a>
### Input: 

GraphQL queries, API endpoint, authentication tokens.

<a name="o"></a>
### Output: 

Processed API responses, distilled data, informative error messages.

<a name="err"></a>
#### __<ins>*Error Handling*</ins>:__

&nbsp;


---------------------

<a name="feat"></a>
## Key Features



<p align="right">(<a href="#graph">back to top</a>)</p>

---------------------
<a name="flow"></a>
## Basic Workflow Guide

1. Familiarize yourself with the GraphQL specification and the basics of making GraphQL requests. 
2. Understand the GraphQL protocol, including schema definition, query language, and response format.
3. Study existing GraphQL libraries and clients to gain insights into their design and implementation.
4. Implement the necessary components to handle GraphQL queries and responses in your C++ library.
5. Explore existing GraphQL libraries in C++ for inspiration. 
6. Design and implement a library that abstracts away the complexities of working with GraphQL.


1. Integrate the "graphQLOL" library into your C++ project.
   
2. Leverage the library's functions to construct GraphQL queries, dispatch requests, and proficiently handle responses.


&nbsp; 
<p align="right">(<a href="#graph">back to top</a>)</p>



--------------------

<a name="plus"></a>
## Future Enhancements:

<p align="right">(<a href="#graph">back to top</a>)</p>

---------------------
  
<a name="install"></a>
## User Installation

<a name="prereq"></a>
### System Prerequisites:

The library mandates a functional C++ compiler, pertinent libraries for HTTP communication, and consistent internet connectivity for API interaction.

<a name="preweb"></a>
#### **Web App:**




<a name="predesk"></a>
#### **Desktop App:**


<a name="prefile"></a>
> **<ins>File System Permissions (*Desktop App*)</ins>:**


<a name="preaiml"></a>
#### **Optional AI/ML Permissions:**


<a name="leg"></a>
#### **Legal and Copyright Compliance:**


<a name="priv"></a>
#### **Privacy and Data Security:**

<p align="right">(<a href="#graph">back to top</a>)</p>

------

<a name="guide"></a>
### Installation Guides:

<a name="webinst"></a>
#### **Web App:**

<a name="instmac"></a>
#### **Desktop App (macOS):**


<a name="climac"></a>
##### 1. <ins>Command Line Installation</ins>:


<a name="gitmac"></a>
##### 2. <ins>Github Installation</ins>:

&nbsp;


<a name="instwindows"></a>
#### **Desktop App (Windows):**

&nbsp;

<p align="right">(<a href="#graph">back to top</a>)</p>

---------------

<a name="usage"></a>
## Usage

<a name="use-case"></a>
### Potential Use Cases: 


- Algorithmic trading strategy formulation, backtesting, and refinement.
- Real-time market data monitoring and informed decision-making.
- Portfolio analysis and optimization for traders and investors.



&nbsp;

<p align="right">(<a href="#graph">back to top</a>)</p>

<a name="appl"></a>
### Practical Applications:


&nbsp;

<p align="right">(<a href="#graph">back to top</a>)</p>

---------------------

<a name="misc"></a>
### <ins>Miscellaneous</ins>:

<a name="est"></a>
#### <ins>Time Estimate</ins>:

Approximately 40-60 hours


<p align="right">(<a href="#graph">back to top</a>)</p>

---------------------

<a name="devenv"></a>
#### Development Environment:

> - **Operating System:** macOS Ventura *(version 14.3.1)*
> - **Architecture:** Apple arm64


<p align="right">(<a href="#graph">back to top</a>)</p>

---------------------
<a name="give"></a>
## How to Support Us

We welcome contributions from the community to help improve `graphQLOL` and make it even better.

- Contribute: Encourage developers to actively participate by submitting pull requests, identifying bugs, and suggesting enhancements via GitHub.
- Donate: Highlight how donations will bolster continuous development, long-term maintenance, and the potential expansion of the library's scope.


<p align="right">(<a href="#graph">back to top</a>)</p>

---------------------
<a name="bye"></a>
## Conclusion

`graphQLOL` embodies a robust C++ library, proficiently encapsulating the intricacies of GraphQL integration and enabling seamless communication with the Investopedia trading game API. Through meticulous documentation, strategic design choices, and the potential for AI integration, the project underscores your mastery of software development while making a substantial contribution to the dynamic domain of algorithmic trading and financial analysis.

Thank you for choosing `graphQLOL`, and let's embark on this journey of audio conversion excellence together.

<p align="right">(<a href="#graph">back to top</a>)</p>

---------------------------
<a name="contact"></a>
<!-- CONTACT -->
## Contact

Lyndsey Gu - [@lyndskg](https://twitter.com/lyndskg) - lyndsey.gu@gmail.com

Project Link: [https://github.com/your_username/repo_name](https://github.com/lyndskg/graphQLOL)

<p align="right">(<a href="#graph">back to top</a>)</p>

---------------------------
<a name="ack"></a>
<!-- ACKNOWLEDGMENTS -->
## Acknowledgments

> Put
> Shit
> Here

**<ins>Resources</ins>:**
1. **Online tutorials:** 
> - "How to build a `GraphQL` server"
> - "How to `GraphQL`"
> - "Creating Your First `GraphQL` API"
2. **Online resources:** GraphQL official documentation, `GraphQL` APIs and clients, `GraphQL` C/C++ Libraries
3. **GitHub Repos**: `libgraphqlparser`, `cppgraphqlgen`

<p align="right">(<a href="#graph">back to top</a>)</p>


<!-- MARKDOWN LINKS & IMAGES -->
<!-- https://www.markdownguide.org/basic-syntax/#reference-style-links -->
[contributors-shield]: https://img.shields.io/github/contributors/othneildrew/Best-README-Template.svg?style=for-the-badge
[contributors-url]: https://github.com/othneildrew/Best-README-Template/graphs/contributors
[forks-shield]: https://img.shields.io/github/forks/othneildrew/Best-README-Template.svg?style=for-the-badge
[forks-url]: https://github.com/othneildrew/Best-README-Template/network/members
[stars-shield]: https://img.shields.io/github/stars/othneildrew/Best-README-Template.svg?style=for-the-badge
[stars-url]: https://github.com/othneildrew/Best-README-Template/stargazers
[issues-shield]: https://img.shields.io/github/issues/othneildrew/Best-README-Template.svg?style=for-the-badge
[issues-url]: https://github.com/othneildrew/Best-README-Template/issues
[license-shield]: https://img.shields.io/github/license/othneildrew/Best-README-Template.svg?style=for-the-badge
[license-url]: https://github.com/othneildrew/Best-README-Template/blob/master/LICENSE.txt
[linkedin-shield]: https://img.shields.io/badge/-LinkedIn-black.svg?style=for-the-badge&logo=linkedin&colorB=555
[linkedin-url]: https://linkedin.com/in/othneildrew
[product-screenshot]: images/screenshot.png
[Next.js]: https://img.shields.io/badge/next.js-000000?style=for-the-badge&logo=nextdotjs&logoColor=white
[Next-url]: https://nextjs.org/

