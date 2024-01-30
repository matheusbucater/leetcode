# typescript setup for leetcode

## Setup

### Installing depencies
`npm install --save-dev @types/jest ts-jest @jest/globals`

### Creating basic config file for `ts-jest`
`npx ts-jest config:init`

### Creating our files
`touch main.ts main.test.ts`

### Adding test script to `package.json`
    {
        "scripts": {
            "test": "jest"
        }
    }

## Runing our tests
`npm test`
