# Change Log for Amazon Corretto 20

The following sections describe the changes for each release of Amazon Corretto 20.

## Corretto version: 20.0.2.9.1
Release Date: July 18, 2023

**Target Platforms**

+ RPM-based Linux using glibc 2.12 or later, x86_64
+ Debian-based Linux using glibc 2.12 or later, x86_64
+ RPM-based Linux using glibc 2.17 or later, aarch64
+ Debian-based Linux using glibc 2.17 or later, aarch64
+ Alpine-based Linux, x86_64
+ Alpine-based Linux, aarch64
+ Windows 10 or later, x86_64
+ macos 11.0 and later, x86_64
+ macos 11.0 and later, aarch64


The following issues are addressed in 20.0.2.9.1:

| Issue Name            | Platform | Description                                 | Link                                                                        |
|-----------------------|----------|---------------------------------------------|-----------------------------------------------------------------------------|
| Import jdk-20.0.2+9   | All      | Updates Corretto baseline to OpenJDK 20.0.2+9  | [jdk-20.0.2+9](https://github.com/openjdk/jdk20u/releases/tag/jdk-20.0.2+9) |
| Dynamic linking zlib               | All      | Dynamic linking zlib         | [#11](https://github.com/corretto/corretto-20/pull/11)                      |
| 8302483: Enhance ZIP performance          | All      | This release of OpenJDK includes stronger checks on the Zip64 fields of zip files. In the event that these checks cause failures on trusted zip files, the checks can be disabled by setting the new system property 'jdk.util.zip.disableZip64ExtraFieldValidation' to 'true'. |                                                                             |
| 8300596: Enhance Jar Signature validation | All      | A System property "jdk.jar.maxSignatureFileSize" is introduced to configure the maximum number of bytes allowed for the signature-related files in a JAR file during verification. The default value is 8000000 bytes (8 MB). |                                                                             |

The following CVEs are addressed in 20.0.2.9.1:

| CVE            | CVSS | Component                   |
|----------------|------|-----------------------------|
| CVE-2023-22041 | 5.1  | hotspot/compiler |
| CVE-2023-25193 | 3.7  | client-libs/2d |
| CVE-2023-22044 | 3.7  | hotspot/compiler |
| CVE-2023-22045 | 3.7  | hotspot/compiler |
| CVE-2023-22049 | 3.7  | core-libs/java.io |
| CVE-2023-22036 | 3.7  | core-libs/java.util |
| CVE-2023-22006 | 3.1  | core-libs/java.net |

## Corretto version: 20.0.1.9.1
Release Date: April 18, 2023

**Target Platforms**

+ RPM-based Linux using glibc 2.12 or later, x86_64
+ Debian-based Linux using glibc 2.12 or later, x86_64
+ RPM-based Linux using glibc 2.17 or later, aarch64
+ Debian-based Linux using glibc 2.17 or later, aarch64
+ Alpine-based Linux, x86_64
+ Alpine-based Linux, aarch64
+ Windows 10 or later, x86_64
+ macos 11.0 and later, x86_64
+ macos 11.0 and later, aarch64


The following issues are addressed in 20.0.1.9.1:

| Issue Name            | Platform | Description                                 | Link                                                                   |
|-----------------------|----------|---------------------------------------------|------------------------------------------------------------------------|
| Import jdk-20.0.1+9   | All      | Updates Corretto baseline to OpenJDK 20.0.1+9  | [jdk-20.0.1.9+1](https://github.com/openjdk/jdk20u/releases/tag/jdk-20.0.1+9) |
| 8305113: (tz) Update Timezone Data to 2023c | All      | Update Timezone Data to 2023c | [#6](https://github.com/corretto/corretto-20/pull/6) |
| Update amazon cacerts | All      | Update amazon cacerts file from amazonlinux | [#5](https://github.com/corretto/corretto-20/pull/5) [#7](https://github.com/corretto/corretto-20/pull/7) [#8](https://github.com/corretto/corretto-20/pull/8) |

The following CVEs are addressed in 20.0.1.9.1:

| CVE            | CVSS | Component                   |
|----------------|------|-----------------------------|
| CVE-2023-21930 | 7.4  | security-libs/javax.net.ssl |
| CVE-2023-21967 | 5.9  | security-libs/javax.net.ssl |
| CVE-2023-21939 | 5.3  | client-libs/javax.swing     |
| CVE-2023-21938 | 3.7  | core-libs/java.lang         |
| CVE-2023-21937 | 3.7  | core-libs/java.net          |
| CVE-2023-21968 | 3.7  | core-libs/java.nio          |


## Corretto version: 20.0.0.36.1
Release Date: February 23, 2023

**Target Platforms**

+ RPM-based Linux using glibc 2.12 or later, x86_64
+ Debian-based Linux using glibc 2.12 or later, x86_64
+ RPM-based Linux using glibc 2.17 or later, aarch64
+ Debian-based Linux using glibc 2.17 or later, aarch64
+ Alpine-based Linux, x86_64
+ Alpine-based Linux, aarch64
+ Windows 10 or later, x86_64
+ macos 11.0 and later, x86_64
+ macos 11.0 and later, aarch64


The following issues are addressed in 20.0.0.36.1

| Issue Name            | Platform | Description                                 | Link                                                                   |
|-----------------------|----------|---------------------------------------------|------------------------------------------------------------------------|
| Import jdk-20+36      | All      | Updates Corretto baseline to OpenJDK 20+36  | [jdk-20+36](https://github.com/openjdk/jdk20/releases/tag/jdk-20%2B36) |
| Update amazon cacerts | All      | Update amazon cacerts file from amazonlinux | [#4](https://github.com/corretto/corretto-20/pull/4)                   |


## Corretto version: 20.0.0.33.1
Release Date: February 10, 2023

**Target Platforms**

+ RPM-based Linux using glibc 2.12 or later, x86_64
+ Debian-based Linux using glibc 2.12 or later, x86_64
+ RPM-based Linux using glibc 2.17 or later, aarch64
+ Debian-based Linux using glibc 2.17 or later, aarch64
+ Alpine-based Linux, x86_64
+ Alpine-based Linux, aarch64
+ Windows 11 or later, x86_64
+ macos 11.0 and later, x86_64
+ macos 11.0 and later, aarch64


The following issues are addressed in 20.0.0.33.1

| Issue Name       | Platform | Description                                | Link                                                                   |
|------------------|----------|--------------------------------------------|------------------------------------------------------------------------|
| Import jdk-20+33 | All      | Updates Corretto baseline to OpenJDK 20+33 | [jdk-20+33](https://github.com/openjdk/jdk20/releases/tag/jdk-20%2B33) |

