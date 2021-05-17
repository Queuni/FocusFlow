# Changelog


## 2026-02-03
- Fix the off-by-one error in the date range iterator

## 2026-02-18
- Bump the Docker base image to get the latest security patches

## 2026-02-24
- Fix race condition in the cache that could return stale data under load

## 2026-02-24
- Implement a simple health check endpoint for the load balancer

## 2026-03-20
- Refactor the main entry point to make it easier to test

## 2026-03-23
- Clean up unused imports and fix formatting to match the project style guide

## 2026-03-26
- Improve performance by caching the result of the expensive lookup

## 2026-04-01
- Handle the case when the external service returns an empty list

## 2026-04-01
- Support loading config from multiple files with later overriding earlier

## 2026-04-07
- Handle edge case when the response body is empty but status is 200

## 2026-04-07
- Adjust buffer size for the stream reader to reduce memory usage

## 2026-02-09
- Support passing secrets via a separate file for security

## 2026-02-12
- Simplify error messages so they are actionable for the end user

## 2026-02-18
- Clean up the test fixtures and move shared data to a single file

## 2026-02-24
- Improve performance by caching the result of the expensive lookup

## 2026-02-24
- Add proper error handling for invalid config so the app doesn't crash on startup

## 2026-03-05
- Handle connection reset by the peer without crashing the worker

## 2026-03-11
- Adjust timeout and retry settings based on production observations

## 2026-03-17
- Simplify error messages so they are actionable for the end user

## 2026-03-20
- Refactor config loading into a separate module for better testability

## 2026-03-23
- Fix the off-by-one error in the date range iterator

## 2026-03-23
- Update the deployment docs with the new environment variables

## 2026-03-26
- Implement fallback to default value when config key is missing

## 2026-04-07
- Correct the comparison that was using the wrong operator

## 2021-03-09
- Bump the CI image to use the latest stable runner version

## 2021-03-15
- Correct the comparison that was using the wrong operator

## 2021-03-18
- Clean up the deprecated alias and point callers to the new name

## 2021-03-18
- Bump the tool version and update the pre-commit hook config

## 2021-04-02
- Handle the redirect response and follow it to get the final resource

## 2021-04-08
- Adjust the queue size to prevent drops under burst traffic

## 2021-04-14
- Refactor utils to use a single source of truth for default values

## 2021-05-11
- Improve logging so we can trace requests through the pipeline in production

## 2021-05-17
- Improve the default config so it works out of the box for dev
